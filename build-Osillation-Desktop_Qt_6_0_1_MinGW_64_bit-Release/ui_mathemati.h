/********************************************************************************
** Form generated from reading UI file 'mathemati.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATHEMATI_H
#define UI_MATHEMATI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Mathemati
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *line;
    QFrame *frame;
    QLabel *label;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;
    QLabel *label_4;
    QFrame *line_2;
    QLabel *label_5;
    QSlider *horizontalSlider_2;
    QSpinBox *spinBox_2;
    QCustomPlot *widget;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton;

    void setupUi(QDialog *Mathemati)
    {
        if (Mathemati->objectName().isEmpty())
            Mathemati->setObjectName(QString::fromUtf8("Mathemati"));
        Mathemati->resize(876, 617);
        QFont font;
        font.setPointSize(11);
        Mathemati->setFont(font);
        Mathemati->setStyleSheet(QString::fromUtf8("background-color:rgb(228, 241, 255)"));
        pushButton_2 = new QPushButton(Mathemati);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 20, 101, 61));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setUnderline(false);
        pushButton_2->setFont(font1);
        pushButton_2->setMouseTracking(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" font-size:13pt;\n"
" background-color:rgb(96, 255, 109);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" border-color: rgb(65, 255, 211);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgb(67, 255, 64)\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
" background-color:rgb(155, 232, 255)\n"
"}\n"
"\n"
"\n"
""));
        pushButton_3 = new QPushButton(Mathemati);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 20, 101, 61));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" font-size:13pt;\n"
" background-color: rgb(255, 103, 106);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" border-color: rgb(255, 94, 204);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgb(255, 62, 65)\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
" background-color:rgb(255, 84, 224)\n"
"}\n"
"\n"
""));
        line = new QFrame(Mathemati);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(320, -20, 16, 651));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        line->setFont(font3);
        line->setStyleSheet(QString::fromUtf8("background-color: solid"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        frame = new QFrame(Mathemati);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 110, 301, 271));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color:rgb(197, 220, 255)\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 231, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Sitka Heading"));
        font4.setPointSize(14);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color: solid;\n"
"\n"
"\n"
"\n"
"}"));
        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(20, 120, 61, 31));
        spinBox->setStyleSheet(QString::fromUtf8("background-color: solid"));
        spinBox->setMaximum(179);
        spinBox->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);
        spinBox->setValue(0);
        horizontalSlider = new QSlider(frame);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(100, 126, 179, 21));
        horizontalSlider->setStyleSheet(QString::fromUtf8("background-color: solid"));
        horizontalSlider->setMaximum(179);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 70, 261, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Sitka Display"));
        font5.setPointSize(12);
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8("background-color: solid"));
        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 40, 261, 20));
        line_2->setStyleSheet(QString::fromUtf8("Line {\n"
"background-color:solid\n"
"\n"
"}"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 170, 271, 31));
        label_5->setFont(font5);
        label_5->setStyleSheet(QString::fromUtf8("background-color: solid"));
        horizontalSlider_2 = new QSlider(frame);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(100, 226, 179, 21));
        horizontalSlider_2->setStyleSheet(QString::fromUtf8("background-color: solid"));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(25);
        horizontalSlider_2->setValue(10);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        spinBox_2 = new QSpinBox(frame);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(20, 220, 61, 31));
        spinBox_2->setStyleSheet(QString::fromUtf8("background-color: solid"));
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(25);
        spinBox_2->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);
        spinBox_2->setValue(10);
        widget = new QCustomPlot(Mathemati);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(370, 20, 441, 241));
        widget->setStyleSheet(QString::fromUtf8(" background-color: solid"));
        frame_2 = new QFrame(Mathemati);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 410, 301, 181));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:rgb(213, 255, 245)"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 71, 31));
        QFont font6;
        font6.setPointSize(10);
        label_2->setFont(font6);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color: solid;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: rgb(255, 179, 144);\n"
"\n"
"}"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(110, 70, 211, 31));
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("background-color: solid"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 70, 71, 31));
        label_7->setFont(font6);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color: solid;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: rgb(255, 179, 144);\n"
"\n"
"}"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 20, 181, 31));
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("background-color: solid"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 120, 71, 31));
        label_8->setFont(font6);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color: solid;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: rgb(178, 55, 255);\n"
"\n"
"}"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(110, 120, 211, 31));
        label_9->setFont(font5);
        label_9->setStyleSheet(QString::fromUtf8("background-color: solid"));
        pushButton = new QPushButton(Mathemati);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(823, 0, 51, 51));
        QFont font7;
        font7.setFamily(QString::fromUtf8("MT Extra"));
        font7.setPointSize(8);
        pushButton->setFont(font7);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:solid;\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
" border-color: rgb(253, 255, 162);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
" border-color: rgb(255, 164, 84);\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
" border-color:rgb(155, 232, 255)\n"
"}\n"
""));
        pushButton->setIconSize(QSize(40, 40));

        retranslateUi(Mathemati);
        QObject::connect(horizontalSlider, &QSlider::valueChanged, spinBox, &QSpinBox::setValue);
        QObject::connect(spinBox, &QSpinBox::valueChanged, horizontalSlider, &QSlider::setValue);
        QObject::connect(spinBox_2, &QSpinBox::valueChanged, horizontalSlider_2, &QSlider::setValue);
        QObject::connect(horizontalSlider_2, &QSlider::valueChanged, spinBox_2, &QSpinBox::setValue);

        QMetaObject::connectSlotsByName(Mathemati);
    } // setupUi

    void retranslateUi(QDialog *Mathemati)
    {
        Mathemati->setWindowTitle(QCoreApplication::translate("Mathemati", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Mathemati", "\320\237\321\203\321\201\320\272", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Mathemati", "\320\241\321\202\320\276\320\277", nullptr));
        label->setText(QCoreApplication::translate("Mathemati", "\320\222\320\262\320\276\320\264 \320\270\321\201\321\205\320\276\320\264\320\275\321\213\321\205 \320\264\320\260\320\275\320\275\321\213\321\205  ", nullptr));
        label_4->setText(QCoreApplication::translate("Mathemati", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\276\320\265 \320\276\321\202\320\272\320\273\320\276\320\275\320\265\320\275\320\270\320\265(\320\263\321\200\320\260\320\264):", nullptr));
        label_5->setText(QCoreApplication::translate("Mathemati", "\320\243\321\201\320\272\320\276\321\200\320\265\320\275\320\270\320\265 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\320\276\320\263\320\276 \320\277\320\260\320\264\320\265\320\275\320\270\321\217:", nullptr));
        label_2->setText(QString());
        label_6->setText(QCoreApplication::translate("Mathemati", "- \321\202\320\276\321\207\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\277\320\265\321\200\320\270\320\276\320\264\320\260", nullptr));
        label_7->setText(QString());
        label_3->setText(QCoreApplication::translate("Mathemati", "- \321\204\320\276\321\200\320\274\321\203\320\273\320\260 \320\223\321\216\320\263\320\265\320\275\321\201\320\260", nullptr));
        label_8->setText(QString());
        label_9->setText(QCoreApplication::translate("Mathemati", "- \320\277\320\276\320\263\321\200\320\265\321\210\320\275\320\276\321\201\321\202\321\214 ", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Mathemati: public Ui_Mathemati {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATHEMATI_H
