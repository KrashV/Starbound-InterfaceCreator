#ifndef TEXTBOXWIDGET_H
#define TEXTBOXWIDGET_H

#include <QtCore/qstring.h>
#include <QtCore/qpoint.h>
#include "abstractwidget.h"

class TextboxWidget : public AbstractWidget
{
public:
    TextboxWidget();

protected:
    QString regex;
    int maxWidth;
    bool focus;
    QString escapeKey;
    QString enterKey;
    QString callback;
    QString hint;
};

#endif // TEXTBOXWIDGET_H
