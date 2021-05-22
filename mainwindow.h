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

    void on_dot_clicked();

    void on_Clear_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_mult_clicked();

    void on_div_clicked();

    void on_mod_button_clicked();

    void on_perc_button_clicked();

    void on_equal_clicked();

    void on_Back_clicked();

    void on_sin_clicked();

    void on_cos_clicked();

    void on_tan_clicked();

    void on_asin_clicked();

    void on_acos_clicked();

    void on_atan_clicked();

    void on_sci_button_clicked();

    void on_x_square_button_clicked();

    void on_x_cube_button_clicked();

    void on_sqrt_button_clicked();

    void on_inverse_button_clicked();

    void on_power_button_clicked();

    void on_fact_button_clicked();

    void on_log_nat_button_clicked();

    void on_log_dec_button_clicked();

    void on_plus_minus_button_clicked();

private:
    Ui::MainWindow *ui;
    double n1;
    double n2;
    double r;

    //I've added two variables for some method
    //which needs to new the previous operation chosen
    char o1;
    char o2;
};

#endif // MAINWINDOW_H
