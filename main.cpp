#include "mainwindow.h"
#include <QApplication>
#include "installationsubmenu.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    InstallationSubMenu *installSubMenu = new InstallationSubMenu();
    installSubMenu->show();
    return a.exec();
}
