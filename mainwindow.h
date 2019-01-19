#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGlobal>
#include <cstdlib>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_n1_clicked();

    void on_n2_clicked();

    void on_n3_clicked();

    void on_n4_clicked();

    void on_n5_clicked();

    void on_n6_clicked();

    void on_n7_clicked();

    void on_n8_clicked();

    void on_n9_clicked();

    void on_n0_clicked();

    void on_Clear_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_mult_clicked();

    void on_div_clicked();

    void on_equal_clicked();

    void on_Back_clicked();

    void on_pushButton_clicked();

    void on_sin_clicked();

    void on_cos_clicked();

    void on_tan_clicked();

    void on_asin_clicked();

    void on_acos_clicked();

    void on_atan_clicked();

private:
    Ui::MainWindow *ui;
    qreal n,n1,r,c;
    qint32 flag,t;
    char o;

};

#endif // MAINWINDOW_H
