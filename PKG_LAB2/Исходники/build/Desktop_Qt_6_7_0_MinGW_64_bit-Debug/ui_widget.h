/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QListView *listView;
    QLabel *Label_1;
    QLabel *Label_5;
    QLabel *Label_3;
    QLabel *Label_4;
    QLabel *Label_2;
    QLabel *FileName;
    QLineEdit *lineEdit;
    QLabel *Contraction;
    QLabel *Resolution;
    QLabel *Color_depth;
    QLabel *Size;
    QPushButton *multiChoice;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(700, 500);
        listView = new QListView(Widget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 20, 551, 311));
        Label_1 = new QLabel(Widget);
        Label_1->setObjectName("Label_1");
        Label_1->setGeometry(QRect(30, 340, 100, 40));
        Label_1->setFrameShape(QFrame::NoFrame);
        Label_1->setFrameShadow(QFrame::Plain);
        Label_1->setAlignment(Qt::AlignCenter);
        Label_5 = new QLabel(Widget);
        Label_5->setObjectName("Label_5");
        Label_5->setGeometry(QRect(30, 400, 100, 40));
        Label_5->setFrameShape(QFrame::NoFrame);
        Label_5->setFrameShadow(QFrame::Plain);
        Label_5->setAlignment(Qt::AlignCenter);
        Label_3 = new QLabel(Widget);
        Label_3->setObjectName("Label_3");
        Label_3->setGeometry(QRect(250, 340, 100, 40));
        Label_3->setFrameShape(QFrame::NoFrame);
        Label_3->setFrameShadow(QFrame::Plain);
        Label_3->setAlignment(Qt::AlignCenter);
        Label_4 = new QLabel(Widget);
        Label_4->setObjectName("Label_4");
        Label_4->setGeometry(QRect(250, 400, 100, 40));
        Label_4->setFrameShape(QFrame::NoFrame);
        Label_4->setFrameShadow(QFrame::Plain);
        Label_4->setAlignment(Qt::AlignCenter);
        Label_2 = new QLabel(Widget);
        Label_2->setObjectName("Label_2");
        Label_2->setGeometry(QRect(470, 340, 100, 40));
        Label_2->setFrameShape(QFrame::Box);
        Label_2->setFrameShadow(QFrame::Plain);
        Label_2->setLineWidth(0);
        Label_2->setMidLineWidth(0);
        Label_2->setAlignment(Qt::AlignCenter);
        FileName = new QLabel(Widget);
        FileName->setObjectName("FileName");
        FileName->setGeometry(QRect(130, 350, 120, 20));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 450, 651, 31));
        lineEdit->setFrame(true);
        lineEdit->setReadOnly(true);
        Contraction = new QLabel(Widget);
        Contraction->setObjectName("Contraction");
        Contraction->setGeometry(QRect(570, 350, 100, 20));
        Resolution = new QLabel(Widget);
        Resolution->setObjectName("Resolution");
        Resolution->setGeometry(QRect(350, 350, 120, 20));
        Color_depth = new QLabel(Widget);
        Color_depth->setObjectName("Color_depth");
        Color_depth->setGeometry(QRect(350, 410, 100, 20));
        Size = new QLabel(Widget);
        Size->setObjectName("Size");
        Size->setGeometry(QRect(130, 410, 120, 20));
        multiChoice = new QPushButton(Widget);
        multiChoice->setObjectName("multiChoice");
        multiChoice->setGeometry(QRect(580, 20, 101, 71));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Label_1->setText(QCoreApplication::translate("Widget", "Filename: ", nullptr));
        Label_5->setText(QCoreApplication::translate("Widget", "Size: ", nullptr));
        Label_3->setText(QCoreApplication::translate("Widget", "Resolution:", nullptr));
        Label_4->setText(QCoreApplication::translate("Widget", "Color depth", nullptr));
        Label_2->setText(QCoreApplication::translate("Widget", "Contraction:", nullptr));
        FileName->setText(QString());
        Contraction->setText(QString());
        Resolution->setText(QString());
        Color_depth->setText(QString());
        Size->setText(QString());
        multiChoice->setText(QCoreApplication::translate("Widget", "Choose\n"
"Several\n"
"Files", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
