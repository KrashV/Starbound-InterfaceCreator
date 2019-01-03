#ifndef WIDGETEDITOR_H
#define WIDGETEDITOR_H

#include <QDialog>

namespace Ui {
    class WidgetEditor;
}

class WidgetEditor : public QDialog
{
    Q_OBJECT

public:
    explicit WidgetEditor(QWidget *parent = 0);
    ~WidgetEditor();

private slots:
    void on_cbTypes_currentIndexChanged(int index);

private:
    Ui::WidgetEditor *ui;
};

#endif // WIDGETEDITOR_H
