#ifndef QTWORKSHOP_H
#define QTWORKSHOP_H

#include <QMainWindow>
#include <QStringList>

namespace Ui {
class QtWorkshop;
}

class QtWorkshop : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtWorkshop(QWidget *parent = 0);
    ~QtWorkshop();

private slots:
    void showAboutDialog();

private:
    Ui::QtWorkshop *ui;

    static QStringList m_contributorList;
};

#endif // QTWORKSHOP_H
