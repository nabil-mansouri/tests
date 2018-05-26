var ft_list = document.querySelector('#ft_list');
var buttonNew = document.querySelector('#new');
var tasks;
var promptRes;
var cookie;
var tasksArray = [];
var length;

window.onload = function () {

    if (cookie = getCookie("tasks"))
    {
        tasksArray = cookie.split(';');
        for(var i = 0; i < tasksArray.length; i++)
            createDiv(tasksArray[i]);
    }
    updateEventList(1);
}

buttonNew.addEventListener("click", function () {

    if (promptRes = prompt("New task"))
    {
        createDiv(promptRes);
        tasksArray.push(promptRes);
        setCookie("tasks", tasksArray.join(";"));
        updateEventList(0);
    }
})


function updateEventList(onload) {
    tasks = document.querySelectorAll(".tasks");
    length = tasks.length;

    if (!onload)
        length = 1;
    for (var i = 0; i < length; i++)
    {
        tasks[i].addEventListener("click", function () {
            if (confirm("Delete the task : " + this.innerHTML))
            {
                this.remove();
                tasksArray.pop();
                setCookie("tasks", tasksArray.join(';'));
            }
        })
    }
}

function createDiv(res) {

    var text = document.createTextNode(res);
    var div = document.createElement("div")

    div.style.cssText = "border: solid black 1px; background-color: red; margin: 10px;";
    div.classList.add("tasks");
    div.appendChild(text);
    ft_list.insertBefore(div, ft_list.firstChild);
}


function setCookie(sName, sValue) {
    var today = new Date(), expires = new Date();
    expires.setTime(today.getTime() + (60000));
    document.cookie = sName + "=" + encodeURIComponent(sValue) + ";expires=" + expires.toGMTString();
}



function getCookie(sName) {
    var cookContent = document.cookie, cookEnd, i, j;
    var sName = sName + "=";

    for (i=0, c=cookContent.length; i<c; i++) {
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
