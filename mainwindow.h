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
    /// <summary>
    /// This function expands the teams' display tables when the new team is added.
    /// </summary>
    void expandTables();

private slots:
    /// <summary>
    /// This function opens up the 'CONTACT US' menu when the option is selected.
    /// </summary>
    void on_actionContactUs_triggered();

    /// <summary>
    /// This function changes the display to LIGHT MODE when selected.
    /// </summary>
    void on_actionLight_Mode_triggered();

    /// <summary>
    /// This function changes the display to DARK MODE when selected.
    /// </summary>
    void on_actionDark_Mode_triggered();
    
    /// <summary>
    /// This function displays all the teams when clicked on.
    /// </summary>
    void on_radioAll_clicked();

    /// <summary>
    /// This function displays only the teams affiliated with the AMERICAN FOOTBALL CONFERENCE when clicked on.
    /// </summary>
    void on_radioAFC_clicked();

    /// <summary>
    /// This function displays only the teams affiliated with the NATIONAL FOOTBALL CONFERENCE when clicked.
    /// </summary>
    void on_radioNFL_clicked();

    /// <summary>
    /// This function opens the 'MAINTENANCE' menu when called upon.
    /// </summary>
    void on_actionMaintenance_triggered();

    /// <summary>
    /// This function displays the 'HELP' menu when called upon.
    /// </summary>
    void on_actionHelp_triggered();

private:
    Ui::MainWindow *ui;
    void TableWidgetInit();
};




#endif // MAINWINDOW_H
