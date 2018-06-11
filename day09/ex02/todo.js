var ft_list = document.querySelector('#ft_list');
var tasks;
var cookie;
var tasksArray;

window.onload = function () {

    document.querySelector('#new').addEventListener("click", newTask);
    if (cookie = getCookie("tasks"))
    {
        tasksArray = cookie.split(';');
        for(var i = 0; i < tasksArray.length; i++)
            createTask(tasksArray[i]);
    }
    tasksArray = [];
}

window.onunload = function () {
    var childrenList;

    childrenList = ft_list.children;

    for (var i = 0; i < childrenList.length; i++)
        tasksArray.unshift(childrenList[i].innerHTML);
    setCookie("tasks", tasksArray.join(';'));
}

function newTask() {
    var promptRes;

    if (promptRes = prompt("New task"))
        createTask(promptRes);
}

function deleteTask() {
    if (confirm("Delete the task : " + this.innerHTML))
        this.remove();
}

function createTask(res) {

    var div = document.createElement("div");

    div.innerHTML = res;
    div.classList.add("tasks");
    div.addEventListener("click", deleteTask);
    ft_list.insertBefore(div, ft_list.firstChild);
}


function setCookie(sName, sValue) {
    var today = new Date(), expires = new Date();
    expires.setTime(today.getTime() + 10000);
    document.cookie = sName + "=" + encodeURIComponent(sValue) + ";expires=" + expires.toGMTString();
}

function getCookie(sName) {
    var cookContent = document.cookie, cookEnd, i, j;
    var sName = sName + "=";

    for (i = 0, c = cookContent.length; i < c; i++) {
        j = i + sName.length;
        if (cookContent.substring(i, j) == sName) {
            cookEnd = cookContent.indexOf(";", j);
            if (cookEnd == -1) {
                cookEnd = cookContent.length;
            }
            return decodeURIComponent(cookContent.substring(j, cookEnd));
        }
    }
    return null;
}
