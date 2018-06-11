var tasks;
var cookie;
var tasksArray;


$(function () {

    $('#new').click(newTask);

    if (cookie = getCookie("tasks"))
    {
        tasksArray = cookie.split(';');
        for(var i = 0; i < tasksArray.length; i++)
            createTask(tasksArray[i]);
    }
    tasksArray = [];
})

$(window).on("unload", function () {
    var childrenList;

    childrenList = $('#ft_list').children();

    for (var i = 0; i < childrenList.length; i++)
        tasksArray.unshift(childrenList[i].innerHTML);
    setCookie("tasks", tasksArray.join(';'));
})

function newTask() {
    var promptRes;

    if (promptRes = prompt("New task"))
        createTask(promptRes);
}

function deleteTask() {
    if (confirm("Delete the task : " + $(this).text()))
        $(this).remove();
}

function createTask(res) {

    jQuery('<div/>', {
        class: 'tasks',
        text: res
    }).prependTo('#ft_list');
    $('#ft_list div:first-child').click(deleteTask);
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
