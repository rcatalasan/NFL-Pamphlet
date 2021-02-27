#include "mainwindow.h"
#include "team.h"
#include "header.h"
#include <QCoreApplication>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Team arr[AR_SIZE];
    inputFn(arr, AR_SIZE);
    w.show();
    return a.exec();
}
