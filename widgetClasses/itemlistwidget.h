#ifndef ITEMLISTWIDGET_H
#define ITEMLISTWIDGET_H

#include <QtCore/qvector.h>
#include "abstractwidget.h"

class ItemListWidget : public AbstractWidget
{
public:
    ItemListWidget();

private:
    struct Schema {
        QString selectedBG;
        QString unselectedBG;
        QPoint spacing;
        QPoint memberSize;
        QVector<AbstractWidget> listTemplate;
    };
protected:
    bool fillDown;
    QString callback;
    Schema schema;
};

#endif // ITEMLISTWIDGET_H
