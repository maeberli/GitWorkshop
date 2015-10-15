#ifndef QTWORKSHOP_H
#define QTWORKSHOP_H

#include <QMainWindow>

namespace Ui {
class QtWorkshop;
}

class QtWorkshop : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtWorkshop(QWidget *parent = 0);
    ~QtWorkshop();

private:
    Ui::QtWorkshop *ui;
};

#endif // QTWORKSHOP_H
