#include "installationsubmenu.h"
#include "ui_installationsubmenu.h"

InstallationSubMenu::InstallationSubMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InstallationSubMenu)
{
    ui->setupUi(this);
//    ui->listView->addAction();
}

InstallationSubMenu::~InstallationSubMenu()
{
    delete ui;
}
