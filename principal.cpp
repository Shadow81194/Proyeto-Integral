#include "principal.h"
#include "ui_principal.h"
#include "ayuda.h"
#include <QMessageBox>

Principal::Principal(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::on_pushButton_released()
{
    // Obtener el nombre
    QString cedula = ui->inCedula->text();
    // Valida que el nombre no esté vacío
    if (cedula.isEmpty()){
        QMessageBox::warning(this, "Votacion","No has proporcionado el numero de cedula");
        return;
    }
   Ayuda *ayuda = new Ayuda(this);
        ayuda->show();
   ui->inCedula->setText("");
}

