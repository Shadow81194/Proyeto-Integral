#include "certidicado.h"
#include "ui_certidicado.h"

Certidicado::Certidicado(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Certidicado)
{
    ui->setupUi(this);
}

Certidicado::~Certidicado()
{
    delete ui;
}
