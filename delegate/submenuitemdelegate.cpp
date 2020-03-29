#include "submenuitemdelegate.h"

#include <QPainter>
#include <QStyledItemDelegate>
#include <QStyle>
#include <QEvent>
#include <QDebug>
#include "../common/itemdef.h"
#include <QDebug>

SubMenuItemDelegate::SubMenuItemDelegate(QObject *parent) :
    QStyledItemDelegate(parent)
{

}

SubMenuItemDelegate::~SubMenuItemDelegate()
{

}

void SubMenuItemDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if(index.isValid())
    {
        painter->save();
        QVariant variant = index.data(Qt::UserRole);
        SubMenuItemData data = variant.value<SubMenuItemData>();

        QStyleOptionViewItem viewOption(option);//用来在视图中画一个item

        if(option.state.testFlag(QStyle::State_Selected))
        {
            QImage itemLightIcon;
            itemLightIcon.load(":/images/images/HighLightIcon.png");
            itemLightIcon.scaled(viewOption.rect.size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            painter->drawImage(viewOption.rect, itemLightIcon);
        }

//        if(option.state.testFlag(QStyle::State_Selected))
//        {
//            QPixmap itemLightIcon;
//            itemLightIcon.load(":/images/images/HighLightIcon.png");
//            itemLightIcon.scaled(viewOption.rect.size(), Qt::KeepAspectRatio);
//            painter->drawPixmap(viewOption.rect, itemLightIcon);
//        }

        //draw text
        QRect rect(option.rect);
        painter->setPen(QPen(Qt::white));
        painter->setFont(QFont("Times", 18, QFont::Bold));
        painter->drawText(rect, Qt::AlignHCenter|Qt::AlignVCenter, data.name); //绘制名字

//        if (index.flags() == Qt::ItemIsSelectable)
//        {
//            QPixmap itemLightIcon;
//            itemLightIcon.load(":/images/images/HighLightIcon.png");
//            painter->drawPixmap(viewOption.rect, itemLightIcon);
//        }
//        if (option.checkState == Qt::Checked)
//        {
//            QPixmap itemLightIcon;
//            itemLightIcon.load(":/images/images/HighLightIcon.png");
//            painter->drawPixmap(viewOption.rect, itemLightIcon);
//        }
//        QRectF rect;setCurrentIndex
//        rect.setX(viewOption.rect.x());
//        rect.setY(viewOption.rect.y());
//        rect.setWidth( viewOption.rect.width()-1);
//        rect.setHeight(viewOption.rect.height()-1);

//        //QPainterPath画圆角矩形
//        const qreal radius = 7;
//        QPainterPath path;  //可以画矩形、圆形...  或者线段
//        path.moveTo(rect.topRight() - QPointF(radius, 0));
//        path.lineTo(rect.topLesetCurrentIndexft() + QPointF(radius, 0));
//        path.quadTo(rect.topLeft(), rect.topLeft() + QPointF(0, radius));
//        path.lineTo(rect.bottomLeft() + QPointF(0, -radius));
//        path.quadTo(rect.bottomLeft(), rect.bottomLeft() + QPointF(radius, 0));
//        path.lineTo(rect.bottomRight() - QPointF(radius, 0));
//        path.quadTo(rect.bottomRight(), rect.bottomRight() + QPointF(0, -radius));
//        path.lineTo(rect.topRight() + QPointF(0, radius));
//        path.quadTo(rect.topRight(), rect.topRight() + QPointF(-radius, -0));

//        if(option.state.testFlag(QStyle::State_Selected))
//        {
//            painter->setPen(QPen(Qt::blue));
//            painter->setBrush(QColor(229, 241, 255));
//            painter->drawPath(path);
//        }
//        else if(option.state.testFlag(QStyle::State_MouseOver))
//        {
//            painter->setPen(QPen(Qt::green));
//            painter->setBrush(Qt::NoBrush);
//            painter->drawPath(path);
//        }
//        else{
//            painter->setPen(QPen(Qt::gray));
//            painter->setBrush(Qt::NoBrush);
//            painter->drawPath(path);
//        }

//        //绘制数据位置
//        QRect NameRect = QRect(rect.left() +10, rect.top()+10, rect.width()-30, 20);
//        QRect circle = QRect(NameRect.right(), rect.top()+10, 10, 10);
//        QRect telRect = QRect(rect.left() +10, rect.bottom()-25, rect.width()-10, 20);


//        switch (status) {
//        case S_RED:
//            painter->setBrush(Qt::red);
//            painter->setPen(QPen(Qt::red));
//            break;
//        case S_BLUE:
//            painter->setBrush(Qt::blue);
//            painter->setPen(QPen(Qt::blue));
//            break;
//        case S_YELLOW:
//            painter->setBrush(Qt::yellow);
//            painter->setPen(QPen(Qt::yellow));
//            break;
//        }

//        painter->drawEllipse(circle);     //画圆圈

//        painter->setPen(QPen(Qt::black));
//        painter->setFont(QFont("Times", 12, QFont::Bold));
//        painter->drawText(NameRect,Qt::AlignLeft,data.name); //绘制名字

//        painter->setPen(QPen(Qt::gray));
//        painter->setFont(QFont("Times", 10));
//        painter->drawText(telRect,Qt::AlignLeft,data.tel); //绘制电话

        painter->restore();
    }
}

QSize SubMenuItemDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return QSize(160, 40);
}
