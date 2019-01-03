#ifndef ITEMSLOTWIDGET_H
#define ITEMSLOTWIDGET_H

#include <QtCore/qstring.h>
#include "abstractwidget.h"

class ItemSlotWidget : public AbstractWidget
{
public:
    ItemSlotWidget();

protected:
    QString backingImage;
    QString callback;
    QString rightClickCallback;
    bool showBackingImageWhenEmpty;
    bool showBackingImageWhenFull;
    bool showRarity;
    bool showDurability;
    bool showCount;
};

#endif // ITEMSLOTWIDGET_H
