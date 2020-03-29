#ifndef SUBMENU_ITEMDELEGATE_H
#define SUBMENU_ITEMDELEGATE_H
#include <QStyledItemDelegate>
#include <QModelIndex>
#include <QStandardItemModel>

class SubMenuItemDelegate : public QStyledItemDelegate
{
    Q_OBJECT
signals:

public:
    explicit SubMenuItemDelegate(QObject *parent = 0);
    ~SubMenuItemDelegate();

    //重写重画函数
    void paint(QPainter * painter,const QStyleOptionViewItem & option,const QModelIndex & index) const;
    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const;

private:

};

#endif // SUBMENU_ITEMDELEGATE_H
