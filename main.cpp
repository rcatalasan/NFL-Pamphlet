#include "mainwindow.h"
#include "linkedList.h"
#include <QCoreApplication>
#include <QApplication>

int main(int argc, char *argv[])
{
    //****************************
    // Linked list of teams:
    Node* teams = new Node();
    //****************************
    readFile(&teams);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    delete teams;
    return a.exec();
}
