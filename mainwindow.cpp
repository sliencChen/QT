#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu/installationsubmenu.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_10_clicked()
{
//    InstallationSubMenu *installSubMenu = new InstallationSubMenu(this);
//    installSubMenu->show();
//    this->hide();
}
