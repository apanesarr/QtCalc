#include "calculatorview.h"
#include "ui_calculatorview.h"

CalculatorView::CalculatorView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorView)
{
    ui->setupUi(this);
}

CalculatorView::~CalculatorView()
{
    delete ui;
}

CalculatorView::on_num1_clicked(){

}
