#include "candidatos.h"
#include "ui_candidatos.h"

Candidatos::Candidatos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Candidatos)
{
    ui->setupUi(this);
}

Candidatos::~Candidatos()
{
    delete ui;
}

void Candidatos::on_pushButton_released()
{
    Certidicado *certidicado = new Certidicado(this);
    certidicado->show();
}

