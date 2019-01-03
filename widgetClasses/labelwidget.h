#ifndef LABELWIDGET_H
#define LABELWIDGET_H

#include "abstractwidget.h"

class LabelWidget : public AbstractWidget
{
public:
    LabelWidget();
    QString getValue() { return value; }

    void setValue(QString _value) { value = _value; }

protected:
    QString value;
    QString hAnchor;
    QString vAnchor;
    QString color;
    QString wrapWidth;
    float fontSize;
};

#endif // LABELWIDGET_H
