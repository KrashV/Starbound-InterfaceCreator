#ifndef IMAGESTRETCHWIDGET_H
#define IMAGESTRETCHWIDGET_H

#include "abstractwidget.h"

class ImageStretchWidget : public AbstractWidget
{
public:
    ImageStretchWidget();

private:
    struct StretchSet {
        QString begin;
        QString inner;
        QString end;
    };
protected:
    QString direction;
    StretchSet stretchSet;
};

#endif // IMAGESTRETCHWIDGET_H
