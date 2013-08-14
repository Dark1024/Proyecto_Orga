#include "ventanacrearcampos.h"
#include "ui_ventanacrearcampos.h"

VentanaCrearCampos::VentanaCrearCampos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaCrearCampos)
{
    ui->setupUi(this);
}

VentanaCrearCampos::~VentanaCrearCampos()
{
    delete ui;
}

void VentanaCrearCampos::on_btCancelarNuevoCampo_clicked()
{
    this->close();
}
