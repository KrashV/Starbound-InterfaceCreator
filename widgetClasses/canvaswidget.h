#ifndef CANVASWIDGET_H
#define CANVASWIDGET_H

#include <QtCore/qstring.h>
#include <QtCore/qrect.h>
#include "abstractwidget.h"

class CanvasWidget : public AbstractWidget
{
public:
    CanvasWidget();

protected:
    QRect rect;
    bool captureMouseEvents;
    bool captureKeyEvents;
};

#endif // CANVASWIDGET_H
