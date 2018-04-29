#include "calculatorview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorView w;
    w.show();

    return a.exec();
}
