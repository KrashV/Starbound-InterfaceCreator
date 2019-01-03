#ifndef RADIOGROUPWIDGET_H
#define RADIOGROUPWIDGET_H

#include <QtCore/qstring.h>
#include <QtCore/qvector.h>
#include "abstractwidget.h"

class RadioGroupWidget : public AbstractWidget
{
public:
    RadioGroupWidget();

private:
    struct RadioGroupButton
    {
        int id;
        QString baseImage;
        QString hoverImage;
        QString baseImageChecked;
        QString hoverImageChecked;
        QPoint pressedOffset;
        QPoint position;
        bool selected;
        bool visible;
    };

protected:
    bool toggleMode;
    QString callback;
    QVector<RadioGroupButton> buttons;
};


#endif // RADIOGROUPWIDGET_H
