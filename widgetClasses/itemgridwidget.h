#ifndef ITEMGRIDWIDGET_H
#define ITEMGRIDWIDGET_H

#include <QtCore/qstring.h>
#include <QtCore/qpoint.h>
#include "abstractwidget.h"

class ItemGridWidget : public AbstractWidget
{
public:
    ItemGridWidget();

protected:
    QPoint dimensions;
    QPoint spacing;
    int slotOffset;
    QString backingImage;
    QString callback;
    QString rightClickCallback;
};

#endif // ITEMGRIDWIDGET_H
