#ifndef PANEFEATUREWIDGET_H
#define PANEFEATUREWIDGET_H

#include "abstractwidget.h"

class PaneFeatureWidget : public AbstractWidget
{
public:
    PaneFeatureWidget();

protected:
    QString anchor;
    bool positionLocked;
};

#endif // PANEFEATUREWIDGET_H
