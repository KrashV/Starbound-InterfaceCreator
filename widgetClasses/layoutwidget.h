#ifndef LAYOUTWIDGET_H
#define LAYOUTWIDGET_H

#include <QtCore/qrect.h>
#include <QtCore/qvector.h>
#include "abstractwidget.h"

class LayoutWidget : public AbstractWidget
{
public:
    LayoutWidget();

protected:
    QString layoutType;
    QRect rect;
    QPoint size;
    QPoint spacing;
    QVector<AbstractWidget> children;
};

#endif // LAYOUTWIDGET_H
