#ifndef VENTANACREARCAMPOS_H
#define VENTANACREARCAMPOS_H

#include <QDialog>

namespace Ui {
class VentanaCrearCampos;
}

class VentanaCrearCampos : public QDialog
{
    Q_OBJECT
    
public:
    explicit VentanaCrearCampos(QWidget *parent = 0);
    ~VentanaCrearCampos();
    
private slots:
    void on_btCancelarNuevoCampo_clicked();

private:
    Ui::VentanaCrearCampos *ui;
};

#endif // VENTANACREARCAMPOS_H
