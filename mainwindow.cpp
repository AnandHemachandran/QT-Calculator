#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    this->n1 = 0.0;
    this->n2 = 0.0;
    this->r = 0.0;
    o1 = ' ';
    o2 = ' ';
    //This frame (sci_frame) keep extra option which is hidden
    //but if the user wants to use them, can show the buttons showing this frame
    ui->sci_frame->hide();
    this->setWindowTitle("Calculator");
    this->setFixedSize(212, 279);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//This is the buttons for the numbers and the dot button
void MainWindow::on_n1_clicked(){
    std::string display = ui->result_text->text().toStdString() ;
    ui->result_text->clear();
    ui->result_text->setText( QString::fromStdString( display + "1") );
}

void MainWindow::on_n2_clicked(){
    std::string display = ui->result_text->text().toStdString() ;
    ui->result_text->clear();
    ui->result_text->setText( QString::fromStdString( display + "2") );
}

void MainWindow::on_n3_clicked(){
    std::string display = ui->result_text->text().toStdString() ;
    ui->result_text->clear();
    ui->result_text->setText( QString::fromStdString( display + "3") );
}

void MainWindow::on_n4_clicked(){
    std::string display = ui->result_text->text().toStdString() ;
    ui->result_text->clear();
    ui->result_text->setText( QString::fromStdString( display + "4") );
}

void MainWindow::on_n5_clicked(){
    std::string display = ui->result_text->text().toStdString() ;
    ui->result_text->clear();
    ui->result_text->setText( QString::fromStdString( display + "5") );
}

void MainWindow::on_n6_clicked(){
    std::string display = ui->result_text->text().toStdString() ;
    ui->result_text->clear();
    ui->result_text->setText( QString::fromStdString( display + "6") );
}

void MainWindow::on_n7_clicked(){
    std::string display = ui->result_text->text().toStdString() ;
    ui->result_text->clear();
    ui->result_text->setText( QString::fromStdString( display + "7") );
}

void MainWindow::on_n8_clicked(){
    std::string display = ui->result_text->text().toStdString() ;
    ui->result_text->clear();
    ui->result_text->setText( QString::fromStdString( display + "8") );
}

void MainWindow::on_n9_clicked(){
    std::string display = ui->result_text->text().toStdString() ;
    ui->result_text->clear();
    ui->result_text->setText( QString::fromStdString( display + "9") );
}

void MainWindow::on_n0_clicked(){
    std::string display = ui->result_text->text().toStdString() ;
    ui->result_text->clear();
    ui->result_text->setText( QString::fromStdString( display + "0") );
}

void MainWindow::on_dot_clicked(){
    std::string display = ui->result_text->text().toStdString() ;
    ui->result_text->clear();
    ui->result_text->setText( QString::fromStdString( display + ".") );
}

//If you want to clear everything, with this button the display is cleared
//and every value is set to zero.
void MainWindow::on_Clear_clicked()
{
    n1 = 0.0;
    n2 = 0.0;
    r = 0.0;
    o1 = ' ';
    o2 = ' ';
    ui->result_text->clear();
}

//Buttons for operations which request two values, here I just store the value
//set the variable which will remember the last one operation asked (and the second to last
//if it's needed) and I'll clear the display waiting other operations
void MainWindow::on_add_clicked()
{
    o2 = o1;
    o1 = '+';
    n1 = ui->result_text->text().toDouble();
    ui->result_text->clear();
}

void MainWindow::on_sub_clicked()
{
    o2 = o1;
    o1 = '-';
    n1 = ui->result_text->text().toDouble();
    ui->result_text->clear();
}

void MainWindow::on_mult_clicked()
{
    o2 = o1;
    o1 = '*';
    n1 = ui->result_text->text().toDouble();
    ui->result_text->clear();
}

void MainWindow::on_div_clicked()
{
    o2 = o1;
    o1 = '/';
    n1 = ui->result_text->text().toDouble();
    ui->result_text->clear();
}

//The modular operations works only for integer values, so I set a control
//with std::floor which reminds me the integer part, so if the integer part
//of the value is equal to the value itself, so is an integer and you can go on.
void MainWindow::on_mod_button_clicked(){
    o2 = o1;
    o1 = 'm';
    n1 = ui->result_text->text().toInt();
    if( std::floor(n1) != n1){
        ui->result_text->setText("Mod operator works only with integer values!");
    }
    ui->result_text->clear();
}

void MainWindow::on_power_button_clicked(){
    o2 = o1;
    o1 = '^';
    n1 = ui->result_text->text().toDouble();
    ui->result_text->clear();
}

void MainWindow::on_perc_button_clicked(){
    o2 = o1;
    o1 = '%';
    n1 = ui->result_text->text().toDouble();
    ui->result_text->clear();
}

void MainWindow::on_equal_clicked(){
    if(o1=='+'){
        n2 = ui->result_text->text().toDouble();
        r = n1 + n2;
        ui->result_text->setText(QString::number(r));
    }else if (o1=='-') {
        n2 = ui->result_text->text().toDouble();
        r = n1 - n2;
        ui->result_text->setText(QString::number(r));
    }else if (o1=='*') {
        n2 = ui->result_text->text().toDouble();
        r = n1 * n2;
        ui->result_text->setText(QString::number(r));
    }else if (o1=='/') {
        n2 = ui->result_text->text().toDouble();

        if( n2 == 0.0 ){
            //Math says that it's not possible to divide any number by zero,
            //so I set a control for that
            ui->result_text->setText("Error!");

            n1 = 0.0;
            n2 = 0.0;
            r = 0.0;
        }else{
            r = n1 / n2;
            ui->result_text->setText(QString::number(r));
        }
    }else if (o1=='m') {
        if( std::floor(n1) != n1){
            ui->result_text->setText("Mod operator works only with integer values!");
        }else{
            n2 = ui->result_text->text().toInt();
            r = ((int) n1) % ((int) n2);
            ui->result_text->setText(QString::number(r));
        }
    }else if (o1=='%') {
        n2 = ui->result_text->text().toDouble();

        //This is the case when I need to know the second to last operation
        if(o2=='+'){
            r = n1 + ((n2*n1)/100.0);
        }else if (o2=='-') {
            r = n1 - ((n2*n1)/100.0);
        }else if (o2=='*') {
            r = n1 * ((n2*n1)/100.0);
        }else if (o2=='/') {
            n2 = ui->result_text->text().toDouble();
            if( n2 == 0.0 ){
                ui->result_text->setText("Error!");

                n1 = 0.0;
                n2 = 0.0;
                r = 0.0;
            }else{
                r = n1 / ((n2*n1)/100.0);
            }
        }else if (o2=='m') {
            r = ((int) n1) %((int) ((n2*n1)/100.0));
        }else if (o1=='^') {
            r = pow(n1, ((n2*n1)/100.0));
        }
        ui->result_text->setText(QString::number(r));
    }else if (o1=='^') {
        n2 = ui->result_text->text().toDouble();
        r = pow(n1, n2);
        ui->result_text->setText(QString::number(r));
    }
}

//This "Back Button" delete the last character on the display
void MainWindow::on_Back_clicked(){
    std::string display = ui->result_text->text().toStdString();
    display.pop_back();
    ui->result_text->setText(QString::fromStdString(display));
}

void MainWindow::on_sin_clicked(){
    r=sin( ui->result_text->text().toDouble() );
    ui->result_text->clear();
    ui->result_text->setText( QString::number( r ) );
}

void MainWindow::on_cos_clicked(){
    r=cos( ui->result_text->text().toDouble() );
    ui->result_text->clear();
    ui->result_text->setText( QString::number( r ) );
}

void MainWindow::on_tan_clicked(){
    r=tan( ui->result_text->text().toDouble() );
    ui->result_text->clear();
    ui->result_text->setText( QString::number( r ) );
}


void MainWindow::on_asin_clicked(){
    r=asin( ui->result_text->text().toDouble() );
    ui->result_text->clear();
    ui->result_text->setText( QString::number( r ) );
}

void MainWindow::on_acos_clicked(){
    r=acos( ui->result_text->text().toDouble() );
    ui->result_text->clear();
    ui->result_text->setText( QString::number( r ) );
}


void MainWindow::on_atan_clicked(){
    r=atan( ui->result_text->text().toDouble() );
    ui->result_text->clear();
    ui->result_text->setText( QString::number( r ) );
}

//This is the button that show the frame of extras operations
void MainWindow::on_sci_button_clicked(){
    if( ui->sci_frame->isHidden() ){
        ui->sci_frame->show();
        this->setFixedWidth(414);
    }else{
        ui->sci_frame->hide();
        this->setFixedWidth(212);
    }
}

//The function pow will return the power (of 2 in this case) of the value
void MainWindow::on_x_square_button_clicked(){
    double value = ui->result_text->text().toDouble();
    r = pow(value, 2.0);
    ui->result_text->clear();
    ui->result_text->setText( QString::number( r ) );
}

void MainWindow::on_x_cube_button_clicked(){
    double value = ui->result_text->text().toDouble();
    r = pow(value, 3.0);
    ui->result_text->clear();
    ui->result_text->setText( QString::number( r ) );
}

void MainWindow::on_sqrt_button_clicked(){
    double value = ui->result_text->text().toDouble();
    r = sqrt( value );
    ui->result_text->clear();
    ui->result_text->setText( QString::number( r ) );
}

//The button 1/X will return the inverse of the value on the display
void MainWindow::on_inverse_button_clicked(){
    double value = ui->result_text->text().toDouble();
    r = 1/value;
    ui->result_text->clear();
    ui->result_text->setText( QString::number( r ) );
}

//Like modular operations, factorial works only for integer
//so I put some control (math also says that factorial of zero and one
//is equal to one)
void MainWindow::on_fact_button_clicked(){
    n1 = ui->result_text->text().toInt();
    int fact = n1;

    if(std::floor(n1) == n1){
        if(n1 == 0 || n1 == 1){
            fact = 1;
        }else if(n1<0){
            n1 *= (-1);
            fact *= (-1);
        }else{
            for (int i = n1 - 1; i != 0; --i){
                fact *= i;
            }
        }

        ui->result_text->clear();
        ui->result_text->setText( QString::number( fact ) );
    }else{
        ui->result_text->clear();
        ui->result_text->setText( "Factorial works only for integer values!");
    }
}

//Natural logarithm is the logarithm to the base of 'e' (e is equal to 2.71 circa)
void MainWindow::on_log_nat_button_clicked(){
    n1 = ui->result_text->text().toDouble();

    r = log(n1);

    ui->result_text->clear();
    ui->result_text->setText( QString::number( r ) );
}

//Natural logarithm is the logarithm to the base of 10
void MainWindow::on_log_dec_button_clicked(){
    n1 = ui->result_text->text().toDouble();

    r = log10(n1);

    ui->result_text->clear();
    ui->result_text->setText( QString::number( r ) );
}

//This will just change the sign of the number on the display
void MainWindow::on_plus_minus_button_clicked(){
    double value = ui->result_text->text().toDouble() * (-1);

    ui->result_text->clear();
    ui->result_text->setText( QString::number( value ) );
}

