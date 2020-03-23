#include "installatiionsubmenu.h"
#include "ui_installatiionsubmenu.h"

InstallatiionSubMenu::InstallatiionSubMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InstallatiionSubMenu)
{
    ui->setupUi(this);
}

InstallatiionSubMenu::~InstallatiionSubMenu()
{
    delete ui;
}
