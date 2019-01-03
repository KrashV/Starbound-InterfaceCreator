#ifndef IMAGEWIDGET_H
#define IMAGEWIDGET_H

#include <QtCore/qstring.h>
#include "abstractwidget.h"

class ImageWidget : public AbstractWidget
{
public:
    ImageWidget();

protected:
    QString file;
    bool centered;
    bool trim;
    QPoint minSize;
    QPoint maxSize;
    int scale;
};

#endif // IMAGEWIDGET_H
