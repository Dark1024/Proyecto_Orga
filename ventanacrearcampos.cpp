#include "ventanacrearcampos.h"
#include "ui_ventanacrearcampos.h"

VentanaCrearCampos::VentanaCrearCampos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaCrearCampos)
{
    //Creacion de una nueva ventana
    ui->setupUi(this);
}

VentanaCrearCampos::~VentanaCrearCampos()
{
    //Libera de la memoria la ventana que se destruye
    delete ui;
}

void VentanaCrearCampos::on_btCancelarNuevoCampo_clicked()
{
    //Cierra la ventana principal
    this->close();
}
