#ifndef CERTIDICADO_H
#define CERTIDICADO_H

#include <QMainWindow>

namespace Ui {
class Certidicado;
}

class Certidicado : public QMainWindow
{
    Q_OBJECT

public:
    explicit Certidicado(QWidget *parent = nullptr);
    ~Certidicado();

private:
    Ui::Certidicado *ui;
};

#endif // CERTIDICADO_H
