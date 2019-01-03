#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include <QDir>
#include <QFileSystemModel>
#include <QSettings>

#include "interfacecreator.h"
#include "widgeteditor.h"
#include "ui_interfacecreator.h"


InterfaceCreator::InterfaceCreator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InterfaceCreator)
{
    ui->setupUi(this);
    QSettings settings("Degranon", "Interface Creator");
    QString aPath = settings.value("assetPath").value<QString>();

    ui->projectView->setColumnCount(1);
    ui->projectView->setContextMenuPolicy(Qt::CustomContextMenu);

    QObject::connect(ui->projectView, SIGNAL(itemDoubleClicked(QTreeWidgetItem *,int)),
                     this, SLOT(editItem(QTreeWidgetItem *)));

    QObject::connect(ui->projectView, SIGNAL(customContextMenuRequested(const QPoint)),
                     this, SLOT(prepareMenu(const QPoint)));
}

void InterfaceCreator::on_actionNew_Project_triggered()
{
    QDir folderPath = QFileDialog::getExistingDirectory(this, QObject::tr("Select the mod folder"), QDir::homePath());
    if (folderPath.exists()) {
        workingDirectory = folderPath.absolutePath();
        setWindowTitle(folderPath.absolutePath());
        ui->projectView->setHeaderLabels(QStringList() << QObject::tr("Widget"));

        QTreeWidgetItem *guiRoot = new QTreeWidgetItem(ui->projectView);
        guiRoot->setText(0, QObject::tr("gui"));
    }
}

void InterfaceCreator::editItem(QTreeWidgetItem * item)
{
    QMessageBox::information(this, "Help", item->text(0));
}

void InterfaceCreator::addItem()
{
    WidgetEditor widgetEditor;
    widgetEditor.setModal(true);
    widgetEditor.exec();
    //QMessageBox::information(this, "Help", ui->projectView->currentItem()->text(0));
}

void InterfaceCreator::prepareMenu( const QPoint & pos )
{
    QTreeWidget *tree = ui->projectView;

    QTreeWidgetItem *node = tree->itemAt( pos );
    if (node) {
        QAction *newAct = new QAction(tr("&Add widget"), this);
        connect(newAct, SIGNAL(triggered()), this, SLOT(addItem()));

        QMenu menu(this);
        menu.addAction(newAct);

        menu.exec( tree->mapToGlobal(pos) );
    }
}

void InterfaceCreator::on_actionChange_asset_foldder_triggered()
{
    QSettings settings("Degranon", "Interface Creator");
    QDir folderPath = QFileDialog::getExistingDirectory(this, QObject::tr("Select the assets folder"), QDir::homePath());
    if (folderPath.exists()) {
        settings.setValue("assetPath", folderPath.absolutePath());
    }
}

InterfaceCreator::~InterfaceCreator()
{
    delete ui;
}
