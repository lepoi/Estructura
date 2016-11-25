#ifndef BOGGLE_H
#define BOGGLE_H

#include <QMainWindow>

namespace Ui {
class Boggle;
}

class Boggle : public QMainWindow
{
    Q_OBJECT

public:
    explicit Boggle(QWidget *parent = 0);
    ~Boggle();

private:
    Ui::Boggle *ui;
};

#endif // BOGGLE_H
