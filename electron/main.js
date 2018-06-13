const electron = require('electron');
const app = electron.app;
const BrowserWindow = electron.BrowserWindow;
const getStdin = require('get-stdin');
const data = require('./getters');

var mainWindow;

function createWindow() {
  getStdin().then(str => {
    mainWindow = new BrowserWindow({
      width: 1800,
      height: 1200,
      icon: 'ant.png'
    });
    mainWindow.loadURL(`file://${__dirname}/index.html`);
    data.get_data(mainWindow, str.split("\n"));
    mainWindow.on('closed', () => {
      mainWindow = null;
    });
    m
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

getStdin().then(str => {
  data.get_data(mainWindow, str.split("\n").pop());
});