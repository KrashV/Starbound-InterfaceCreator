#ifndef INTERFACECREATOR_H
#define INTERFACECREATOR_H

#include <QMainWindow>
#include <QTreeWidgetItem>

namespace Ui {
    class InterfaceCreator;
}

class InterfaceCreator : public QMainWindow
{
    Q_OBJECT

public:
    explicit InterfaceCreator(QWidget *parent = 0);
    ~InterfaceCreator();

private slots:
    void on_actionNew_Project_triggered();
    void addItem();
    void editItem(QTreeWidgetItem *);
    void prepareMenu( const QPoint & pos );
    void on_actionChange_asset_foldder_triggered();

private:
    QString workingDirectory;
    QString assetsPath;

    Ui::InterfaceCreator *ui;
};

#endif // INTERFACECREATOR_H
