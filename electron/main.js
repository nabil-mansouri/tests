const electron = require('electron');
const app = electron.app;
const BrowserWindow = electron.BrowserWindow;
const getStdin = require('get-stdin');
const data = require('./getters');

class Application {

  createWindow() {
    this.mainWindow = new BrowserWindow({
      width: 1800,
      height: 1200,
      icon: 'ant.png'
    });
    this.mainWindow.webContents.openDevTools();
    this.mainWindow.loadURL(`file://${__dirname}/index.html`);
    this.ready = new Promise((resolve, reject) => {
      this.mainWindow.webContents.on('did-finish-load', () => {
        resolve();
      })
    })
  }
  readStdin() {
    this.ready.then(_ => {
      getStdin().then(str => {
        this.mainWindow.webContents.send('test', data.get_data(str))
      })
    })
  }
}
Application.ready = null;
//const app=new Application
//app.createWindow();
//app.readStdin();
var mainWindow;

function createWindow() {
  console.log("SEND WINDOW")
  getStdin().then(str => {
    mainWindow = new BrowserWindow({
      width: 1800,
      height: 1200,
      icon: 'ant.png'
    });
    mainWindow.webContents.openDevTools();
    mainWindow.loadURL(`file://${__dirname}/index.html`);
    mainWindow.webContents.on('did-finish-load', () => {
      console.log("SEND DATA", str)
      mainWindow.webContents.send('test', data.get_data(str))
    })
    mainWindow.on('closed', () => {
      mainWindow = null;
    });
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
