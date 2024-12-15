/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *R;
    QLineEdit *G;
    QLineEdit *B;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *H;
    QLineEdit *S;
    QLineEdit *L;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *C;
    QLineEdit *M;
    QLineEdit *Y;
    QLineEdit *K;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QSlider *R_sl;
    QSlider *G_sl;
    QSlider *B_sl;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QSlider *H_sl;
    QSlider *S_sl;
    QSlider *L_sl;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QSlider *C_sl;
    QSlider *M_sl;
    QSlider *Y_sl;
    QSlider *K_sl;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(150, 30, 301, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        R = new QLineEdit(horizontalLayoutWidget);
        R->setObjectName("R");

        horizontalLayout->addWidget(R);

        G = new QLineEdit(horizontalLayoutWidget);
        G->setObjectName("G");

        horizontalLayout->addWidget(G);

        B = new QLineEdit(horizontalLayoutWidget);
        B->setObjectName("B");

        horizontalLayout->addWidget(B);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(110, 30, 41, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(150, 80, 301, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        H = new QLineEdit(horizontalLayoutWidget_2);
        H->setObjectName("H");

        horizontalLayout_2->addWidget(H);

        S = new QLineEdit(horizontalLayoutWidget_2);
        S->setObjectName("S");

        horizontalLayout_2->addWidget(S);

        L = new QLineEdit(horizontalLayoutWidget_2);
        L->setObjectName("L");

        horizontalLayout_2->addWidget(L);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(150, 130, 301, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        C = new QLineEdit(horizontalLayoutWidget_3);
        C->setObjectName("C");

        horizontalLayout_3->addWidget(C);

        M = new QLineEdit(horizontalLayoutWidget_3);
        M->setObjectName("M");

        horizontalLayout_3->addWidget(M);

        Y = new QLineEdit(horizontalLayoutWidget_3);
        Y->setObjectName("Y");

        horizontalLayout_3->addWidget(Y);

        K = new QLineEdit(horizontalLayoutWidget_3);
        K->setObjectName("K");

        horizontalLayout_3->addWidget(K);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 70, 211, 61));
        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(110, 180, 571, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_4);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        label_5 = new QLabel(horizontalLayoutWidget_4);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(120, 220, 171, 171));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        R_sl = new QSlider(verticalLayoutWidget_2);
        R_sl->setObjectName("R_sl");
        R_sl->setFocusPolicy(Qt::StrongFocus);
        R_sl->setMaximum(255);
        R_sl->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(R_sl);

        G_sl = new QSlider(verticalLayoutWidget_2);
        G_sl->setObjectName("G_sl");
        G_sl->setMaximum(255);
        G_sl->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(G_sl);

        B_sl = new QSlider(verticalLayoutWidget_2);
        B_sl->setObjectName("B_sl");
        B_sl->setMaximum(255);
        B_sl->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(B_sl);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(310, 220, 171, 171));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        H_sl = new QSlider(verticalLayoutWidget_3);
        H_sl->setObjectName("H_sl");
        H_sl->setMaximum(360);
        H_sl->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(H_sl);

        S_sl = new QSlider(verticalLayoutWidget_3);
        S_sl->setObjectName("S_sl");
        S_sl->setMaximum(100);
        S_sl->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(S_sl);

        L_sl = new QSlider(verticalLayoutWidget_3);
        L_sl->setObjectName("L_sl");
        L_sl->setMaximum(100);
        L_sl->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(L_sl);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(500, 220, 171, 171));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        C_sl = new QSlider(verticalLayoutWidget_4);
        C_sl->setObjectName("C_sl");
        C_sl->setMaximum(100);
        C_sl->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(C_sl);

        M_sl = new QSlider(verticalLayoutWidget_4);
        M_sl->setObjectName("M_sl");
        M_sl->setMaximum(100);
        M_sl->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(M_sl);

        Y_sl = new QSlider(verticalLayoutWidget_4);
        Y_sl->setObjectName("Y_sl");
        Y_sl->setMaximum(100);
        Y_sl->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(Y_sl);

        K_sl = new QSlider(verticalLayoutWidget_4);
        K_sl->setObjectName("K_sl");
        K_sl->setFocusPolicy(Qt::StrongFocus);
        K_sl->setMaximum(100);
        K_sl->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(K_sl);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        R->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        G->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        B->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "RGB", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "HSL", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CMYK", nullptr));
        H->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        S->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        L->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        C->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        M->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Y->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        K->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\206\320\262\320\265\321\202 \320\262 \320\277\320\260\320\273\320\270\321\202\321\200\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "                        RGB", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "                        HSL", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "                       CMYK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
