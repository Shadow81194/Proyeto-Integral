#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include "ayuda.h"
#include "candidatos.h"

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QWidget
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private slots:
    void on_pushButton_released();

private:
    Ui::Principal *ui;
};
#endif // PRINCIPAL_H
