#ifndef CALCULATORVIEW_H
#define CALCULATORVIEW_H

#include <QMainWindow>

namespace Ui {
class CalculatorView;
}

class CalculatorView : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculatorView(QWidget *parent = 0);
    ~CalculatorView();
private slots:
    void on_num1_clicked();
    void on_num2_clicked();
    void on_num3_clicked();


private:
    Ui::CalculatorView *ui;

};

#endif // CALCULATORVIEW_H
