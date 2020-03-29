#ifndef ITEMDEF_H
#define ITEMDEF_H

#include <QMetaType>

typedef enum{
    S_RED,
    S_BLUE,
    S_YELLOW,
} ItemStatus;

struct SubMenuItemData{
    int index;
    QString name;
};

Q_DECLARE_METATYPE(SubMenuItemData)

#endif // ITEMDEF_H
