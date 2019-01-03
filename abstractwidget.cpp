#include "abstractwidget.h"

AbstractWidget::AbstractWidget(Type _type) : type(_type)
{
}

AbstractWidget::AbstractWidget(Type _type, QString _name) : type(_type), name(_name)
{
}

QMap<AbstractWidget::Type, QString> AbstractWidget::initTypeNames()
{
    QMap<Type, QString> names;
    names.insert(Invalid, "invalid");
    names.insert(Background, "background");
    names.insert(Title, "title");
    names.insert(Label, "label");
    names.insert(Button, "button");
    names.insert(Checkbox, "checkbox");
    names.insert(Textbox, "textbox");
    names.insert(Image, "image");
    names.insert(Canvas, "canvas");
    names.insert(ItemSlot, "itemslot");
    names.insert(ItemGrid, "itemgrid");
    names.insert(RadioGroup, "radioGroup");
    names.insert(ScrollArea, "scrollArea");
    names.insert(Layout, "layout");
    names.insert(ItemList, "list");
    names.insert(Slider, "slider");
    names.insert(ProgressBar, "progress");
    names.insert(Spinner, "spinner");
    names.insert(PaneFeature, "panefeature");
    names.insert(ImageStretch, "imageStretch");

    return names;
}
