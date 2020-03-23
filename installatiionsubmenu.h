#ifndef INSTALLATIIONSUBMENU_H
#define INSTALLATIIONSUBMENU_H

#include <QWidget>

namespace Ui {
class InstallatiionSubMenu;
}

class InstallatiionSubMenu : public QWidget
{
    Q_OBJECT

public:
    explicit InstallatiionSubMenu(QWidget *parent = 0);
    ~InstallatiionSubMenu();

private:
    Ui::InstallatiionSubMenu *ui;
};

#endif // INSTALLATIIONSUBMENU_H
