#include "ayuda.h"
#include "ui_ayuda.h"

Ayuda::Ayuda(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ayuda)
{
    ui->setupUi(this);
}

Ayuda::~Ayuda()
{
    delete ui;
}

void Ayuda::on_pushButton_released()
{
    Candidatos *canditatos= new Candidatos(this);
    canditatos->show();
}

