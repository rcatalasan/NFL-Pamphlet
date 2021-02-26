#include "mainwindow.h"
#include "linkedList.h"
#include <QCoreApplication>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
