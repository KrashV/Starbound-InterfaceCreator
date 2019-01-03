#ifndef SPINNERWIDGET_H
#define SPINNERWIDGET_H

#include "abstractwidget.h"

class SpinnerWidget : public AbstractWidget
{
public:
    SpinnerWidget();

protected:
    int upOffset;
    QString hAnchor;
    QString callback;
};

#endif // SPINNERWIDGET_H
