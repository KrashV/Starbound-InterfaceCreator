#include "widgeteditor.h"
#include "ui_widgeteditor.h"

#include <QMap>
#include <QDebug>
#include "abstractwidget.h"

Q_DECLARE_METATYPE(AbstractWidget::Type)

WidgetEditor::WidgetEditor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WidgetEditor)
{
    ui->setupUi(this);
    QComboBox* cbTypes = ui->cbTypes;

    QMap<AbstractWidget::Type, QString> typeNames = AbstractWidget::getTypeNames();
    QMapIterator<AbstractWidget::Type, QString> it(typeNames);

    // Ignore Invalid type
    it.next();
    while (it.hasNext()) {
        it.next();
        cbTypes->addItem(it.value(), qVariantFromValue(it.key()));
    }
}

void WidgetEditor::on_cbTypes_currentIndexChanged(int index)
{
    // TODO: Clearing the parameters layout
    AbstractWidget::Type type = ui->cbTypes->itemData(index).value<AbstractWidget::Type>();

    // TODO: populate the parameters field with the appropriate... parameters.
    switch(type) {
        case AbstractWidget::Background:

    }
}

WidgetEditor::~WidgetEditor()
{
    delete ui;
}
