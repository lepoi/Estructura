#include "boggle.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Boggle w;
    w.show();

    return a.exec();
}
