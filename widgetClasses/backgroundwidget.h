#ifndef BACKGROUNDWIDGET_H
#define BACKGROUNDWIDGET_H

#include <QtCore/qstring.h>
#include "abstractwidget.h"

class BackgroundWidget : public AbstractWidget
{
public:
    BackgroundWidget();

protected:
    QString fileHeader;
    QString fileBody;
    QString fileFooter;
};

#endif // BACKGROUNDWIDGET_H
