#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 创建退出按钮
    exit=new QAction("退出",this);
    // 连接信号槽
    connect(exit, &QAction::triggered, qApp, &QCoreApplication::quit);
    // 创建托盘菜单
    trayIconMenu = new QMenu(this);
    // 托盘菜单添加按钮
    trayIconMenu->addAction(exit);
    // 创建托盘
    trayIcon = new QSystemTrayIcon(this);
    // 设置菜单
    trayIcon->setContextMenu(trayIconMenu);
    // 托盘显示
    trayIcon->show();
    // 显示托盘ICON
    trayIcon->setIcon(QIcon(":/images/icon.png"));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonShowTray_clicked()
{
    trayIcon->show();
}

void MainWindow::on_pushButtonHideTray_clicked()
{
    trayIcon->hide();
}

void MainWindow::on_pushButtonChangIcon_clicked()
{
    trayIcon->setIcon(QIcon(":/images/icon1.png"));
}
