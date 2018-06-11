const electron = require('electron');
const app = electron.app;
const BrowserWindow = electron.BrowserWindow;
const getStdin = require('get-stdin');
const data = require('./getters');

var mainWindow;

function createWindow() {
  mainWindow = new BrowserWindow({
    width: 1800,
    height: 1200,
    icon: 'ant.png'
  });
  mainWindow.loadURL(`file://${__dirname}/index.html`);
  mainWindow.on('closed', () => {
  mainWindow = null;
  });
}

app.on('ready', createWindow);

app.on('window-all-closed', () => {
  if (process.platform !== 'darwin') {
    app.quit();
  }
});

app.on('activate', () => {
  if (mainWindow === null) {
    createWindow();
  }
});

let ants = 0;

/*getStdin().then(str => {
  data.get_data(str.split("\n"));
});
*/

//const ipc = require('electron').ipcRenderer;
//ipc.send('log-error', 'salut');
