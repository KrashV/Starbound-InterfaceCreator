#ifndef BUTTONWIDGET_H
#define BUTTONWIDGET_H

#include <QtCore/qstring.h>
#include <QtCore/qpoint.h>
#include "abstractwidget.h"

class ButtonWidget : public AbstractWidget
{
public:
    ButtonWidget();

protected:
    QString base;
    QString hover;
    QString pressed;
    QString disabledImage;
    QPoint pressedOffset;
    QString caption;
    QString fontColor;
    QString fontColorDisabled;
    QString textAlign;
    QString textOffset;
    QString callback;
    bool checkable;
};

#endif // BUTTONWIDGET_H
