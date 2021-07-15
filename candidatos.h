#ifndef CANDIDATOS_H
#define CANDIDATOS_H

#include <QMainWindow>
#include "certidicado.h"

namespace Ui {
class Candidatos;
}

class Candidatos : public QMainWindow
{
    Q_OBJECT

public:
    explicit Candidatos(QWidget *parent = nullptr);
    ~Candidatos();

private slots:
    void on_pushButton_released();

private:
    Ui::Candidatos *ui;
};

#endif // CANDIDATOS_H
