#include "installationsubmenu.h"
#include "ui_installationsubmenu.h"
#include <QStandardItemModel>
#include <QSortFilterProxyModel>

InstallationSubMenu::InstallationSubMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InstallationSubMenu)
{
    ui->setupUi(this);
    initData();
//    ui->listView->addAction();
}

InstallationSubMenu::~InstallationSubMenu()
{
    delete ui;
}

void InstallationSubMenu::initData()
{
    m_model = new QStandardItemModel();
    QStandardItem *item;
    SubMenuItemData itemData;
    m_itemDelegate = new SubMenuItemDelegate(this);

    char subMenu[][50]={
       "Antenna Settings",
        "The list of satellite",
        "LNB Power",
        "The list of TP",
        "ULASA Steup",
    };

    for (int i = 0; i < sizeof(subMenu)/sizeof(subMenu[0]); i++)
    {
        item = new QStandardItem;
        itemData.index = i;
        itemData.name = QString(tr(subMenu[i]));
        item->setData(QVariant::fromValue(itemData), Qt::UserRole);
        m_model->appendRow(item);
    }

    m_model->item(0)->setCheckable(true);
    m_model->item(0)->setCheckState(Qt::Checked);
    m_proxyModel = new QSortFilterProxyModel(ui->listView);
    m_proxyModel->setSourceModel(m_model);
    m_proxyModel->setFilterRole(Qt::UserRole);
    m_proxyModel->setDynamicSortFilter(true);

    ui->listView->setItemDelegate(m_itemDelegate);
    ui->listView->setModel(m_proxyModel);
    ui->listView->setDragEnabled(false);
    ui->listView->setViewMode(QListView::ListMode);
    ui->listView->setCurrentIndex(m_proxyModel->index(0, 0));
}
