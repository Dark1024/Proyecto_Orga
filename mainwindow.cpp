#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QString>
#include "ventanacrearcampos.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNuevo_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this,"New File",QDir::homePath(),"TextFile(*.txt)");
}

void MainWindow::on_actionCrear_triggered()
{
    VentanaCrearCampos* crearCampos = new VentanaCrearCampos();

    crearCampos->exec();
    delete crearCampos;
}

void MainWindow::on_actionSalir_triggered()
{
    this->close();
}
