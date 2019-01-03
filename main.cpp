#include <QtCore>
#include <QtGui>

#include "interfacecreator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InterfaceCreator interfaceCreator;
    interfaceCreator.show();

    return a.exec();
}
