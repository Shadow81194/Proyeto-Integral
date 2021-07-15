#ifndef AYUDA_H
#define AYUDA_H

#include <QMainWindow>
#include "candidatos.h"

namespace Ui {
class Ayuda;
}

class Ayuda : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ayuda(QWidget *parent = nullptr);
    ~Ayuda();

private slots:
    void on_pushButton_released();

private:
    Ui::Ayuda *ui;
};

#endif // AYUDA_H
