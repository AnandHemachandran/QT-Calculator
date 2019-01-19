#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    n=0;
    c=0;
    t=10;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_n1_clicked()
{
    if(flag==1)
    {
        n=n+(1/t);
        t=t*10;
    }else{
    n=(n*10)+1;
    ui->label->setNum(n);
    }
}

void MainWindow::on_n2_clicked()
{
    n=(n*10)+2;
    ui->label->setNum(n);
}

void MainWindow::on_n3_clicked()
{
    n=(n*10)+3;
    ui->label->setNum(n);
}

void MainWindow::on_n4_clicked()
{
    n=(n*10)+4;
    ui->label->setNum(n);
}

void MainWindow::on_n5_clicked()
{
    n=(n*10)+5;
    ui->label->setNum(n);
}

void MainWindow::on_n6_clicked()
{
    n=(n*10)+6;
    ui->label->setNum(n);
}

void MainWindow::on_n7_clicked()
{
    n=(n*10)+7;
    ui->label->setNum(n);
}

void MainWindow::on_n8_clicked()
{
    n=(n*10)+8;
    ui->label->setNum(n);
}

void MainWindow::on_n9_clicked()
{
    n=(n*10)+9;
    ui->label->setNum(n);
}

void MainWindow::on_n0_clicked()
{
    n=(n*10)+0;
    ui->label->setNum(n);
}


void MainWindow::on_Clear_clicked()
{
    n=0;
    r=0;
    n1=0;
    ui->label->setNum(n);
}

void MainWindow::on_add_clicked()
{
    ui->label->setText("+");
    o='+';
    /*if(c>=1){
        n1=n1+n;
        ui->label->setNum(n1);
        n=0;
    }
    c=c+1;*/
    n1=n;
    n=0;

}

void MainWindow::on_sub_clicked()
{
    ui->label->setText("-");
    o='-';
    /*if(c>=1){
        n1=n1-n;
        ui->label->setNum(n1);
        n=0;
    }
    c=c+1;*/
    n1=n;
    n=0;


}


void MainWindow::on_mult_clicked()
{
    ui->label->setText("*");
    o='*';
    /*if(c>=1){
        n1=n1*n;
        ui->label->setNum(n1);
        n=0;
    }
    c=c+1;*/
    n1=n;
    n=0;

}


void MainWindow::on_div_clicked()
{
    ui->label->setText("/");
    o='/';
    /*if(c>=1){
        n1=n1/n;
        ui->label->setNum(n1);
        n=0;
    }
    c=c+1;*/
    n1=n;
    n=0;

}

void MainWindow::on_equal_clicked()
{
    if(o=='+'){
        r=n+n1;
        n=0;
        n1=r;
        ui->label->setNum(r);
    }else if (o=='-') {
        r=n1-n;
        n=0;
        n1=r;
        ui->label->setNum(r);
    }else if (o=='*') {
        r=n1*n;
        n=0;
        n1=r;
        ui->label->setNum(r);
    }else if (o=='/') {
        r=n1/n;
        n=0;
        n1=r;
        ui->label->setNum(r);
    }
}

void MainWindow::on_Back_clicked()
{
    n=n-10;
    ui->label->setNum(n);
}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_sin_clicked()
{
    r=sin(n);
    ui->label->setNum(r);
}

void MainWindow::on_cos_clicked()
{
    r=cos(n);
    ui->label->setNum(r);
}

void MainWindow::on_tan_clicked()
{
    r=tan(n);
    ui->label->setNum(r);
}


void MainWindow::on_asin_clicked()
{
    r=asin(n);
    ui->label->setNum(r);
}

void MainWindow::on_acos_clicked()
{
    r=acos(n);
    ui->label->setNum(r);
}


void MainWindow::on_atan_clicked()
{
    r=atan(n);
    ui->label->setNum(r);
}
