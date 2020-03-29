#ifndef INSTALLATIONSUBMENU_H
#define INSTALLATIONSUBMENU_H

#include <QMainWindow>
#include "common/itemdef.h"
#include "../delegate/submenuitemdelegate.h"

class QStandardItemModel;
class QSortFilterProxyModel;

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
    void initData();

private:
    Ui::InstallationSubMenu *ui;
    QStandardItemModel *m_model;
    QSortFilterProxyModel *m_proxyModel;
    SubMenuItemDelegate *m_itemDelegate;

//    QStringList m_subMenuStr;
};

#endif // INSTALLATIONSUBMENU_H
