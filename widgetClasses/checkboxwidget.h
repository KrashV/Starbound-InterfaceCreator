#ifndef CHECKBOXWIDGET_H
#define CHECKBOXWIDGET_H

#include "buttonwidget.h"

class CheckboxWidget : public ButtonWidget
{
public:
    CheckboxWidget();
    bool getChecked() { return checked; }

    void setChecked(bool _checked) { checked = _checked; }

protected:
    bool checked;
    QString baseImageChecked;
    QString hoverImageChecked;
};

#endif // CHECKBOXWIDGET_H
