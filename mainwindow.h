#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "loginform.h"
#include <fstream>
#include <cstring>
#include "NFL.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    LoginForm *loginForm = new LoginForm();
    NFL arr[AR_SIZE];
    int totalSize;

public slots:
    void expandTables();

private slots:
    void on_actionContactUs_triggered();

    void on_actionLight_Mode_triggered();

    void on_actionDark_Mode_triggered();

    void on_radioAll_clicked();

    void on_radioAFC_clicked();

    void on_radioNFL_clicked();

    void on_actionMaintenance_triggered();

    void on_actionHelp_triggered();

private:
    Ui::MainWindow *ui;
    void TableWidgetInit();
};




#endif // MAINWINDOW_H
