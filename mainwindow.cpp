#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QString>
#include "ventanacrearcampos.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //Creación de una nueva ventana
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    //Libera de la memoria la ventana principal
    delete ui;
}

void MainWindow::on_actionNuevo_triggered()
{
    //Guarda la direccion de la direccion del archivo que se crea
    QString filename = QFileDialog::getSaveFileName(this,"New File",QDir::homePath(),"TextFile(*.txt)");
}

void MainWindow::on_actionCrear_triggered()
{
    //Se hace un apuntador de una nueva ventana VentanaCrearCampos para poder manipularla
    VentanaCrearCampos* crearCampos = new VentanaCrearCampos();

    //Se ejecuta la ventana
    crearCampos->exec();

    //Cuando termina de ejecutarse, se destruye la ventana
    delete crearCampos;
}

void MainWindow::on_actionSalir_triggered()
{
    //Cierra la ventana principal
    this->close();
}
