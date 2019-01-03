#ifndef ABSTRACTWIDGET_H
#define ABSTRACTWIDGET_H

#include <QtCore/qstring.h>
#include <QtCore/qpoint.h>
#include <QtCore/qmap.h>

class AbstractWidget
{
public:
    enum Type {
        Invalid = 0,
        Background = 1,
        Title = 2,
        Label = 3,
        Button = 4,
        Checkbox = 5,
        Textbox = 6,
        Image = 7,
        Canvas = 8,
        ItemSlot = 9,
        ItemGrid = 10,
        RadioGroup = 11,
        ScrollArea = 12,
        Layout = 13,
        ItemList = 14,
        Slider = 15,
        ProgressBar = 16,
        Spinner = 17,
        PaneFeature = 18,
        ImageStretch = 19
    };

    static QMap<Type, QString> initTypeNames();

    static QMap<Type, QString> getTypeNames() {
        static QMap<Type, QString> TYPE_NAMES = initTypeNames();
        return TYPE_NAMES;
    }

    AbstractWidget(Type);
    AbstractWidget(Type, QString);

    Type getType() { return type; }
    QPoint getPosition() { return position; }
    QString getName() { return name; }

    void setPosition(QPoint _position) { position = _position; }

protected:
    Type type;
    QString name;
    QPoint position;
    int zLevel;

};

#endif // ABSTRACTWIDGET_H
