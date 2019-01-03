#ifndef SCROLLAREAWIDGET_H
#define SCROLLAREAWIDGET_H

#include <QtCore/qrect.h>
#include <QtCore/qvector.h>
#include "abstractwidget.h"

class ScrollAreaWidget : public AbstractWidget
{
public:
    ScrollAreaWidget();

private:
    // Buttons table
    struct Button {
        QString base;
        QString hover;
        QString pressed;
    };
    struct ButtonPair {
        Button forward;
        Button backward;
    };
    struct Buttons {
        ButtonPair horizontal;
        ButtonPair vertical;
    };

    // Thumbs table
    struct Scroller {
        QString begin;
        QString inner;
        QString end;
    };
    struct ThumbPair {
        Scroller base;
        Scroller hover;
        Scroller pressed;
    };
    struct Thumbs {
        ThumbPair horizontal;
        ThumbPair vertical;
    };
protected:
    QRect rect;
    QPoint size;
    Thumbs thumbs;
    Buttons buttons;
    QVector<AbstractWidget> children;
};
#endif // SCROLLAREAWIDGET_H
