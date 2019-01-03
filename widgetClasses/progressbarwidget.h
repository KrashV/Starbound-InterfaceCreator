#ifndef PROGRESSBARWIDGET_H
#define PROGRESSBARWIDGET_H

#include "abstractwidget.h"

class ProgressBarWidget : public AbstractWidget
{
public:
    ProgressBarWidget();

private:
    struct ProgressSet {
        QString begin;
        QString inner;
        QString end;
        QString type;
    };
protected:
    QString background;
    QPoint size;
    QString direction;
    ProgressSet progressSet;
};

#endif // PROGRESSBARWIDGET_H
