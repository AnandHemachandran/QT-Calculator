/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *sci_frame;
    QLabel *space_lbl;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *x_square_button;
    QPushButton *sqrt_button;
    QPushButton *sin;
    QPushButton *asin;
    QPushButton *perc_button;
    QPushButton *log_nat_button;
    QVBoxLayout *verticalLayout_6;
    QPushButton *x_cube_button;
    QPushButton *mod_button;
    QPushButton *cos;
    QPushButton *acos;
    QPushButton *power_button;
    QPushButton *log_dec_button;
    QVBoxLayout *verticalLayout_7;
    QPushButton *empty_button;
    QPushButton *inverse_button;
    QPushButton *tan;
    QPushButton *atan;
    QPushButton *fact_button;
    QPushButton *plus_minus_button;
    QLineEdit *result_text;
    QWidget *widget;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Clear;
    QPushButton *Back;
    QPushButton *sci_button;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *n7;
    QPushButton *n4;
    QPushButton *n1;
    QPushButton *n0;
    QVBoxLayout *verticalLayout_3;
    QPushButton *n8;
    QPushButton *n5;
    QPushButton *n2;
    QPushButton *dot;
    QVBoxLayout *verticalLayout_4;
    QPushButton *n9;
    QPushButton *n6;
    QPushButton *n3;
    QPushButton *equal;
    QVBoxLayout *verticalLayout_5;
    QPushButton *div;
    QPushButton *mult;
    QPushButton *sub;
    QPushButton *add;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(416, 281);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sci_frame = new QFrame(centralWidget);
        sci_frame->setObjectName(QString::fromUtf8("sci_frame"));
        sci_frame->setGeometry(QRect(200, 10, 211, 261));
        sci_frame->setFrameShape(QFrame::StyledPanel);
        sci_frame->setFrameShadow(QFrame::Raised);
        space_lbl = new QLabel(sci_frame);
        space_lbl->setObjectName(QString::fromUtf8("space_lbl"));
        space_lbl->setGeometry(QRect(190, 2, 88, 18));
        layoutWidget = new QWidget(sci_frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 10, 191, 244));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        x_square_button = new QPushButton(layoutWidget);
        x_square_button->setObjectName(QString::fromUtf8("x_square_button"));
        QFont font;
        font.setPointSize(14);
        x_square_button->setFont(font);

        verticalLayout_2->addWidget(x_square_button);

        sqrt_button = new QPushButton(layoutWidget);
        sqrt_button->setObjectName(QString::fromUtf8("sqrt_button"));
        sqrt_button->setFont(font);

        verticalLayout_2->addWidget(sqrt_button);

        sin = new QPushButton(layoutWidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sin->sizePolicy().hasHeightForWidth());
        sin->setSizePolicy(sizePolicy);
        sin->setFont(font);

        verticalLayout_2->addWidget(sin);

        asin = new QPushButton(layoutWidget);
        asin->setObjectName(QString::fromUtf8("asin"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(asin->sizePolicy().hasHeightForWidth());
        asin->setSizePolicy(sizePolicy1);
        asin->setFont(font);

        verticalLayout_2->addWidget(asin);

        perc_button = new QPushButton(layoutWidget);
        perc_button->setObjectName(QString::fromUtf8("perc_button"));
        perc_button->setFont(font);

        verticalLayout_2->addWidget(perc_button);

        log_nat_button = new QPushButton(layoutWidget);
        log_nat_button->setObjectName(QString::fromUtf8("log_nat_button"));
        log_nat_button->setMaximumSize(QSize(16777215, 16777215));
        log_nat_button->setFont(font);

        verticalLayout_2->addWidget(log_nat_button);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        x_cube_button = new QPushButton(layoutWidget);
        x_cube_button->setObjectName(QString::fromUtf8("x_cube_button"));
        x_cube_button->setFont(font);

        verticalLayout_6->addWidget(x_cube_button);

        mod_button = new QPushButton(layoutWidget);
        mod_button->setObjectName(QString::fromUtf8("mod_button"));
        mod_button->setFont(font);

        verticalLayout_6->addWidget(mod_button);

        cos = new QPushButton(layoutWidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        sizePolicy1.setHeightForWidth(cos->sizePolicy().hasHeightForWidth());
        cos->setSizePolicy(sizePolicy1);
        cos->setFont(font);

        verticalLayout_6->addWidget(cos);

        acos = new QPushButton(layoutWidget);
        acos->setObjectName(QString::fromUtf8("acos"));
        sizePolicy1.setHeightForWidth(acos->sizePolicy().hasHeightForWidth());
        acos->setSizePolicy(sizePolicy1);
        acos->setFont(font);

        verticalLayout_6->addWidget(acos);

        power_button = new QPushButton(layoutWidget);
        power_button->setObjectName(QString::fromUtf8("power_button"));
        power_button->setFont(font);

        verticalLayout_6->addWidget(power_button);

        log_dec_button = new QPushButton(layoutWidget);
        log_dec_button->setObjectName(QString::fromUtf8("log_dec_button"));
        log_dec_button->setFont(font);

        verticalLayout_6->addWidget(log_dec_button);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        empty_button = new QPushButton(layoutWidget);
        empty_button->setObjectName(QString::fromUtf8("empty_button"));
        empty_button->setEnabled(false);
        empty_button->setFont(font);
        empty_button->setFocusPolicy(Qt::WheelFocus);

        verticalLayout_7->addWidget(empty_button);

        inverse_button = new QPushButton(layoutWidget);
        inverse_button->setObjectName(QString::fromUtf8("inverse_button"));
        inverse_button->setFont(font);

        verticalLayout_7->addWidget(inverse_button);

        tan = new QPushButton(layoutWidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        sizePolicy1.setHeightForWidth(tan->sizePolicy().hasHeightForWidth());
        tan->setSizePolicy(sizePolicy1);
        tan->setFont(font);

        verticalLayout_7->addWidget(tan);

        atan = new QPushButton(layoutWidget);
        atan->setObjectName(QString::fromUtf8("atan"));
        sizePolicy1.setHeightForWidth(atan->sizePolicy().hasHeightForWidth());
        atan->setSizePolicy(sizePolicy1);
        atan->setFont(font);

        verticalLayout_7->addWidget(atan);

        fact_button = new QPushButton(layoutWidget);
        fact_button->setObjectName(QString::fromUtf8("fact_button"));
        fact_button->setFont(font);

        verticalLayout_7->addWidget(fact_button);

        plus_minus_button = new QPushButton(layoutWidget);
        plus_minus_button->setObjectName(QString::fromUtf8("plus_minus_button"));
        plus_minus_button->setFont(font);

        verticalLayout_7->addWidget(plus_minus_button);


        horizontalLayout_2->addLayout(verticalLayout_7);

        result_text = new QLineEdit(centralWidget);
        result_text->setObjectName(QString::fromUtf8("result_text"));
        result_text->setGeometry(QRect(10, 10, 191, 51));
        result_text->setReadOnly(true);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 70, 191, 201));
        verticalLayout_8 = new QVBoxLayout(widget);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Clear = new QPushButton(widget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        Clear->setFont(font1);

        horizontalLayout_3->addWidget(Clear);

        Back = new QPushButton(widget);
        Back->setObjectName(QString::fromUtf8("Back"));
        sizePolicy1.setHeightForWidth(Back->sizePolicy().hasHeightForWidth());
        Back->setSizePolicy(sizePolicy1);
        Back->setFont(font1);

        horizontalLayout_3->addWidget(Back);

        sci_button = new QPushButton(widget);
        sci_button->setObjectName(QString::fromUtf8("sci_button"));
        sizePolicy1.setHeightForWidth(sci_button->sizePolicy().hasHeightForWidth());
        sci_button->setSizePolicy(sizePolicy1);
        sci_button->setFont(font);

        horizontalLayout_3->addWidget(sci_button);


        verticalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        n7 = new QPushButton(widget);
        n7->setObjectName(QString::fromUtf8("n7"));
        sizePolicy.setHeightForWidth(n7->sizePolicy().hasHeightForWidth());
        n7->setSizePolicy(sizePolicy);
        n7->setMaximumSize(QSize(16777215, 16777215));
        n7->setSizeIncrement(QSize(0, 0));
        n7->setBaseSize(QSize(0, 0));
        n7->setFont(font);
        n7->setAutoDefault(false);
        n7->setFlat(false);

        verticalLayout->addWidget(n7);

        n4 = new QPushButton(widget);
        n4->setObjectName(QString::fromUtf8("n4"));
        sizePolicy.setHeightForWidth(n4->sizePolicy().hasHeightForWidth());
        n4->setSizePolicy(sizePolicy);
        n4->setMaximumSize(QSize(16777215, 16777215));
        n4->setSizeIncrement(QSize(0, 0));
        n4->setBaseSize(QSize(0, 0));
        n4->setFont(font);
        n4->setAutoDefault(false);
        n4->setFlat(false);

        verticalLayout->addWidget(n4);

        n1 = new QPushButton(widget);
        n1->setObjectName(QString::fromUtf8("n1"));
        sizePolicy.setHeightForWidth(n1->sizePolicy().hasHeightForWidth());
        n1->setSizePolicy(sizePolicy);
        n1->setMaximumSize(QSize(16777215, 16777215));
        n1->setSizeIncrement(QSize(0, 0));
        n1->setBaseSize(QSize(0, 0));
        n1->setFont(font);
        n1->setAutoDefault(false);
        n1->setFlat(false);

        verticalLayout->addWidget(n1);

        n0 = new QPushButton(widget);
        n0->setObjectName(QString::fromUtf8("n0"));
        sizePolicy.setHeightForWidth(n0->sizePolicy().hasHeightForWidth());
        n0->setSizePolicy(sizePolicy);
        n0->setMaximumSize(QSize(16777215, 16777215));
        n0->setSizeIncrement(QSize(0, 0));
        n0->setBaseSize(QSize(0, 0));
        n0->setFont(font);
        n0->setAutoDefault(false);
        n0->setFlat(false);

        verticalLayout->addWidget(n0);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        n8 = new QPushButton(widget);
        n8->setObjectName(QString::fromUtf8("n8"));
        sizePolicy.setHeightForWidth(n8->sizePolicy().hasHeightForWidth());
        n8->setSizePolicy(sizePolicy);
        n8->setMaximumSize(QSize(16777215, 16777215));
        n8->setSizeIncrement(QSize(0, 0));
        n8->setBaseSize(QSize(0, 0));
        n8->setFont(font);
        n8->setAutoDefault(false);
        n8->setFlat(false);

        verticalLayout_3->addWidget(n8);

        n5 = new QPushButton(widget);
        n5->setObjectName(QString::fromUtf8("n5"));
        sizePolicy.setHeightForWidth(n5->sizePolicy().hasHeightForWidth());
        n5->setSizePolicy(sizePolicy);
        n5->setMaximumSize(QSize(16777215, 16777215));
        n5->setSizeIncrement(QSize(0, 0));
        n5->setBaseSize(QSize(0, 0));
        n5->setFont(font);
        n5->setAutoDefault(false);
        n5->setFlat(false);

        verticalLayout_3->addWidget(n5);

        n2 = new QPushButton(widget);
        n2->setObjectName(QString::fromUtf8("n2"));
        sizePolicy.setHeightForWidth(n2->sizePolicy().hasHeightForWidth());
        n2->setSizePolicy(sizePolicy);
        n2->setFont(font);

        verticalLayout_3->addWidget(n2);

        dot = new QPushButton(widget);
        dot->setObjectName(QString::fromUtf8("dot"));
        sizePolicy.setHeightForWidth(dot->sizePolicy().hasHeightForWidth());
        dot->setSizePolicy(sizePolicy);
        dot->setMaximumSize(QSize(16777215, 16777215));
        dot->setSizeIncrement(QSize(0, 0));
        dot->setBaseSize(QSize(0, 0));
        dot->setFont(font);
        dot->setAutoDefault(false);
        dot->setFlat(false);

        verticalLayout_3->addWidget(dot);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        n9 = new QPushButton(widget);
        n9->setObjectName(QString::fromUtf8("n9"));
        sizePolicy.setHeightForWidth(n9->sizePolicy().hasHeightForWidth());
        n9->setSizePolicy(sizePolicy);
        n9->setMaximumSize(QSize(16777215, 16777215));
        n9->setSizeIncrement(QSize(0, 0));
        n9->setBaseSize(QSize(0, 0));
        n9->setFont(font);
        n9->setAutoDefault(false);
        n9->setFlat(false);

        verticalLayout_4->addWidget(n9);

        n6 = new QPushButton(widget);
        n6->setObjectName(QString::fromUtf8("n6"));
        sizePolicy.setHeightForWidth(n6->sizePolicy().hasHeightForWidth());
        n6->setSizePolicy(sizePolicy);
        n6->setMaximumSize(QSize(16777215, 16777215));
        n6->setSizeIncrement(QSize(0, 0));
        n6->setBaseSize(QSize(0, 0));
        n6->setFont(font);
        n6->setAutoDefault(false);
        n6->setFlat(false);

        verticalLayout_4->addWidget(n6);

        n3 = new QPushButton(widget);
        n3->setObjectName(QString::fromUtf8("n3"));
        sizePolicy1.setHeightForWidth(n3->sizePolicy().hasHeightForWidth());
        n3->setSizePolicy(sizePolicy1);
        n3->setFont(font);

        verticalLayout_4->addWidget(n3);

        equal = new QPushButton(widget);
        equal->setObjectName(QString::fromUtf8("equal"));
        sizePolicy.setHeightForWidth(equal->sizePolicy().hasHeightForWidth());
        equal->setSizePolicy(sizePolicy);
        equal->setMaximumSize(QSize(16777215, 16777215));
        equal->setSizeIncrement(QSize(0, 0));
        equal->setBaseSize(QSize(0, 0));
        equal->setFont(font);
        equal->setAutoDefault(false);
        equal->setFlat(false);

        verticalLayout_4->addWidget(equal);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        div = new QPushButton(widget);
        div->setObjectName(QString::fromUtf8("div"));
        sizePolicy.setHeightForWidth(div->sizePolicy().hasHeightForWidth());
        div->setSizePolicy(sizePolicy);
        div->setMaximumSize(QSize(16777215, 16777215));
        div->setSizeIncrement(QSize(0, 0));
        div->setBaseSize(QSize(0, 0));
        div->setFont(font);
        div->setAutoDefault(false);
        div->setFlat(false);

        verticalLayout_5->addWidget(div);

        mult = new QPushButton(widget);
        mult->setObjectName(QString::fromUtf8("mult"));
        sizePolicy.setHeightForWidth(mult->sizePolicy().hasHeightForWidth());
        mult->setSizePolicy(sizePolicy);
        mult->setMaximumSize(QSize(16777215, 16777215));
        mult->setSizeIncrement(QSize(0, 0));
        mult->setBaseSize(QSize(0, 0));
        mult->setFont(font);
        mult->setAutoDefault(false);
        mult->setFlat(false);

        verticalLayout_5->addWidget(mult);

        sub = new QPushButton(widget);
        sub->setObjectName(QString::fromUtf8("sub"));
        sizePolicy.setHeightForWidth(sub->sizePolicy().hasHeightForWidth());
        sub->setSizePolicy(sizePolicy);
        sub->setMaximumSize(QSize(16777215, 16777215));
        sub->setSizeIncrement(QSize(0, 0));
        sub->setBaseSize(QSize(0, 0));
        sub->setFont(font);
        sub->setAutoDefault(false);
        sub->setFlat(false);

        verticalLayout_5->addWidget(sub);

        add = new QPushButton(widget);
        add->setObjectName(QString::fromUtf8("add"));
        sizePolicy1.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy1);
        add->setFont(font);

        verticalLayout_5->addWidget(add);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_8->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        n7->setDefault(false);
        n4->setDefault(false);
        n1->setDefault(false);
        n0->setDefault(false);
        n8->setDefault(false);
        n5->setDefault(false);
        dot->setDefault(false);
        n9->setDefault(false);
        n6->setDefault(false);
        equal->setDefault(false);
        div->setDefault(false);
        mult->setDefault(false);
        sub->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        space_lbl->setText(QString());
        x_square_button->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        sqrt_button->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        perc_button->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        log_nat_button->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        x_cube_button->setText(QCoreApplication::translate("MainWindow", "x\302\263", nullptr));
        mod_button->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        power_button->setText(QCoreApplication::translate("MainWindow", "x^y", nullptr));
        log_dec_button->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        empty_button->setText(QString());
        inverse_button->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        fact_button->setText(QCoreApplication::translate("MainWindow", "x!", nullptr));
        plus_minus_button->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        sci_button->setText(QCoreApplication::translate("MainWindow", "Sci", nullptr));
        n7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        n7->setShortcut(QCoreApplication::translate("MainWindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        n4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        n4->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        n1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        n1->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        n0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(shortcut)
        n0->setShortcut(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        n8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        n8->setShortcut(QCoreApplication::translate("MainWindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        n5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        n5->setShortcut(QCoreApplication::translate("MainWindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        n2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        n2->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
#if QT_CONFIG(shortcut)
        dot->setShortcut(QCoreApplication::translate("MainWindow", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        n9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        n9->setShortcut(QCoreApplication::translate("MainWindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        n6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        n6->setShortcut(QCoreApplication::translate("MainWindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        n3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        n3->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        equal->setShortcut(QCoreApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        mult->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
