#ifndef TITLEWIDGET_H
#define TITLEWIDGET_H

#include <QtCore/qstring.h>
#include <QtCore/qpoint.h>
#include "abstractwidget.h"
#include "imagewidget.h"

class TitleWidget : public AbstractWidget
{
public:
    TitleWidget();

protected:
    QString title;
    QString subtitle;
    ImageWidget icon;
};

#endif // TITLEWIDGET_H
