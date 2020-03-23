#ifndef INSTALLATIONSUBMENU_H
#define INSTALLATIONSUBMENU_H

#include <QMainWindow>

namespace Ui {
class InstallationSubMenu;
}

class InstallationSubMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit InstallationSubMenu(QWidget *parent = 0);
    ~InstallationSubMenu();

private:
    Ui::InstallationSubMenu *ui;
};

#endif // INSTALLATIONSUBMENU_H
