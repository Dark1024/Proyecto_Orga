#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //Muestra la ventana principal
    w.show();
    
    return a.exec();
}
