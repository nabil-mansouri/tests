const ipc = require('electron').ipcRenderer;

exports.get_data = function (tab)
{
  for (var i = 0; i < tab.length; i++) {
    if (!i)
      ants = parseInt(tab[i]);
    else if (tab[i][0] == '#')
      get_sharp(tab, i);
    else if (tab[i].indexOf(' '))
      get_room(tab[i].split(' '));
    else if (tab[i].indexOf('-'))
      /*get_link(tab[i].split('-'))*/;
  }
}

function get_sharp(str, i)
{
    if (str[i].localeCompare("##start"))
    {
        get_room(str[++i]);
    }
    else if (str[i].localeCompare("##end"))
    {
        get_room(str[++i]);
    }
}

function get_room(tab)
{

    ipc.send('log-error', {name: tab[0], x: parseInt(tab[1]),y: parseInt(tab[2])});
}