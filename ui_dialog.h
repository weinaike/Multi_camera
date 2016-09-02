/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_show;
    QLabel *label_frame;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_save;
    QLabel *label;
    QLabel *label_num;
    QLabel *label_pre_0;
    QLabel *label_pre_1;
    QLabel *label_pre_2;
    QLabel *label_pre_3;
    QLabel *label_pre_4;
    QLabel *label_pre_5;
    QGroupBox *groupBox;
    QRadioButton *radioButton_0;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QPushButton *pushButton_init;
    QLabel *label_message;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_mean;
    QLabel *label_4;
    QLineEdit *lineEdit_loop;
    QLabel *label_loop;
    QLabel *label_5;
    QLineEdit *lineEdit_save_num;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1000, 720);
        label_show = new QLabel(Dialog);
        label_show->setObjectName(QStringLiteral("label_show"));
        label_show->setGeometry(QRect(330, 30, 640, 360));
        label_show->setFrameShape(QFrame::Box);
        label_show->setAlignment(Qt::AlignCenter);
        label_frame = new QLabel(Dialog);
        label_frame->setObjectName(QStringLiteral("label_frame"));
        label_frame->setGeometry(QRect(330, 430, 641, 240));
        label_frame->setFrameShape(QFrame::StyledPanel);
        label_frame->setAlignment(Qt::AlignCenter);
        pushButton_start = new QPushButton(Dialog);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        pushButton_start->setGeometry(QRect(340, 520, 75, 25));
        pushButton_stop = new QPushButton(Dialog);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));
        pushButton_stop->setGeometry(QRect(340, 570, 75, 25));
        pushButton_save = new QPushButton(Dialog);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(650, 520, 75, 25));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(500, 440, 75, 25));
        label_num = new QLabel(Dialog);
        label_num->setObjectName(QStringLiteral("label_num"));
        label_num->setGeometry(QRect(490, 470, 75, 25));
        label_num->setFrameShape(QFrame::Box);
        label_num->setFrameShadow(QFrame::Plain);
        label_num->setTextFormat(Qt::AutoText);
        label_num->setAlignment(Qt::AlignCenter);
        label_pre_0 = new QLabel(Dialog);
        label_pre_0->setObjectName(QStringLiteral("label_pre_0"));
        label_pre_0->setGeometry(QRect(0, 0, 220, 120));
        label_pre_0->setFrameShape(QFrame::Box);
        label_pre_0->setAlignment(Qt::AlignCenter);
        label_pre_1 = new QLabel(Dialog);
        label_pre_1->setObjectName(QStringLiteral("label_pre_1"));
        label_pre_1->setGeometry(QRect(0, 120, 220, 120));
        label_pre_1->setFrameShape(QFrame::Box);
        label_pre_1->setAlignment(Qt::AlignCenter);
        label_pre_2 = new QLabel(Dialog);
        label_pre_2->setObjectName(QStringLiteral("label_pre_2"));
        label_pre_2->setGeometry(QRect(0, 240, 220, 120));
        label_pre_2->setFrameShape(QFrame::Box);
        label_pre_2->setAlignment(Qt::AlignCenter);
        label_pre_3 = new QLabel(Dialog);
        label_pre_3->setObjectName(QStringLiteral("label_pre_3"));
        label_pre_3->setGeometry(QRect(0, 360, 220, 120));
        label_pre_3->setFrameShape(QFrame::Box);
        label_pre_3->setAlignment(Qt::AlignCenter);
        label_pre_4 = new QLabel(Dialog);
        label_pre_4->setObjectName(QStringLiteral("label_pre_4"));
        label_pre_4->setGeometry(QRect(0, 480, 220, 120));
        label_pre_4->setFrameShape(QFrame::Box);
        label_pre_4->setAlignment(Qt::AlignCenter);
        label_pre_5 = new QLabel(Dialog);
        label_pre_5->setObjectName(QStringLiteral("label_pre_5"));
        label_pre_5->setGeometry(QRect(0, 600, 220, 120));
        label_pre_5->setFrameShape(QFrame::Box);
        label_pre_5->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(220, 0, 80, 720));
        radioButton_0 = new QRadioButton(groupBox);
        radioButton_0->setObjectName(QStringLiteral("radioButton_0"));
        radioButton_0->setGeometry(QRect(10, 50, 89, 16));
        radioButton_0->setCheckable(true);
        radioButton_0->setChecked(false);
        radioButton_1 = new QRadioButton(groupBox);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        radioButton_1->setGeometry(QRect(10, 170, 89, 16));
        radioButton_1->setCheckable(true);
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 290, 89, 16));
        radioButton_2->setCheckable(true);
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 410, 89, 16));
        radioButton_3->setCheckable(true);
        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(10, 530, 89, 16));
        radioButton_4->setCheckable(true);
        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(10, 650, 89, 16));
        radioButton_5->setCheckable(true);
        pushButton_init = new QPushButton(Dialog);
        pushButton_init->setObjectName(QStringLiteral("pushButton_init"));
        pushButton_init->setGeometry(QRect(490, 520, 75, 25));
        label_message = new QLabel(Dialog);
        label_message->setObjectName(QStringLiteral("label_message"));
        label_message->setGeometry(QRect(600, 570, 171, 41));
        label_message->setFrameShape(QFrame::Box);
        label_message->setTextFormat(Qt::AutoText);
        label_message->setScaledContents(false);
        label_message->setAlignment(Qt::AlignCenter);
        label_message->setWordWrap(true);
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(340, 470, 75, 25));
        lineEdit->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 440, 75, 25));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(650, 440, 75, 25));
        lineEdit_mean = new QLineEdit(Dialog);
        lineEdit_mean->setObjectName(QStringLiteral("lineEdit_mean"));
        lineEdit_mean->setGeometry(QRect(650, 470, 75, 25));
        lineEdit_mean->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(870, 440, 81, 25));
        lineEdit_loop = new QLineEdit(Dialog);
        lineEdit_loop->setObjectName(QStringLiteral("lineEdit_loop"));
        lineEdit_loop->setGeometry(QRect(870, 470, 75, 25));
        lineEdit_loop->setAlignment(Qt::AlignCenter);
        label_loop = new QLabel(Dialog);
        label_loop->setObjectName(QStringLiteral("label_loop"));
        label_loop->setGeometry(QRect(780, 570, 121, 41));
        label_loop->setFrameShape(QFrame::Box);
        label_loop->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(770, 440, 51, 25));
        lineEdit_save_num = new QLineEdit(Dialog);
        lineEdit_save_num->setObjectName(QStringLiteral("lineEdit_save_num"));
        lineEdit_save_num->setGeometry(QRect(760, 470, 75, 25));
        lineEdit_save_num->setAlignment(Qt::AlignCenter);
        label_frame->raise();
        label_show->raise();
        pushButton_start->raise();
        pushButton_stop->raise();
        pushButton_save->raise();
        label->raise();
        label_num->raise();
        label_pre_0->raise();
        label_pre_1->raise();
        label_pre_2->raise();
        label_pre_3->raise();
        label_pre_4->raise();
        label_pre_5->raise();
        groupBox->raise();
        pushButton_init->raise();
        label_message->raise();
        lineEdit->raise();
        label_2->raise();
        label_3->raise();
        lineEdit_mean->raise();
        label_4->raise();
        lineEdit_loop->raise();
        label_loop->raise();
        label_5->raise();
        lineEdit_save_num->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label_show->setText(QApplication::translate("Dialog", "\350\257\246\345\233\276", 0));
        label_frame->setText(QString());
        pushButton_start->setText(QApplication::translate("Dialog", "start", 0));
        pushButton_stop->setText(QApplication::translate("Dialog", "stop", 0));
        pushButton_save->setText(QApplication::translate("Dialog", "\344\277\235\345\255\230\345\233\276\347\211\207", 0));
        label->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\264\346\225\260\351\207\217", 0));
        label_num->setText(QApplication::translate("Dialog", "0", 0));
        label_pre_0->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\2641", 0));
        label_pre_1->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\2642", 0));
        label_pre_2->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\2643", 0));
        label_pre_3->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\2644", 0));
        label_pre_4->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\2645", 0));
        label_pre_5->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\2646", 0));
        groupBox->setTitle(QString());
        radioButton_0->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\2641", 0));
        radioButton_1->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\2642", 0));
        radioButton_2->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\2643", 0));
        radioButton_3->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\2644", 0));
        radioButton_4->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\2645", 0));
        radioButton_5->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\2646", 0));
        pushButton_init->setText(QApplication::translate("Dialog", "\345\210\235\345\247\213\345\214\226", 0));
        label_message->setText(QApplication::translate("Dialog", "\346\217\220\347\244\272", 0));
        lineEdit->setText(QApplication::translate("Dialog", "200", 0));
        label_2->setText(QApplication::translate("Dialog", "\345\210\267\346\226\260\346\227\266\351\227\264(ms)", 0));
        label_3->setText(QApplication::translate("Dialog", "\345\233\276\345\203\217\345\271\263\345\235\207\346\254\241\346\225\260", 0));
        lineEdit_mean->setText(QApplication::translate("Dialog", "10", 0));
        label_4->setText(QApplication::translate("Dialog", "\344\277\235\345\255\230\345\276\252\347\216\257\350\256\241\346\225\260", 0));
        lineEdit_loop->setText(QApplication::translate("Dialog", "5", 0));
        label_loop->setText(QApplication::translate("Dialog", "\345\275\223\345\211\215\344\277\235\345\255\230\346\254\241\346\225\260", 0));
        label_5->setText(QApplication::translate("Dialog", "\344\277\235\345\255\230\345\274\240\346\225\260", 0));
        lineEdit_save_num->setText(QApplication::translate("Dialog", "1", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
