/********************************************************************************
** Form generated from reading UI file 'helpwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPWINDOW_H
#define UI_HELPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->setWindowModality(Qt::ApplicationModal);
        Dialog->resize(383, 300);
        Dialog->setMinimumSize(QSize(383, 300));
        Dialog->setMaximumSize(QSize(383, 300));
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(270, 260, 101, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 331, 41));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 80, 311, 41));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 270, 161, 16));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 130, 291, 16));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 150, 331, 16));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 180, 151, 16));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 200, 81, 16));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 220, 111, 16));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(139, 200, 101, 16));
        label_9->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        label_10 = new QLabel(Dialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(162, 220, 131, 16));
        label_10->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
        label->setText(QApplication::translate("Dialog", "WatchIt 1.02", 0));
        label_2->setText(QApplication::translate("Dialog", "<html><head/><body><p>Клиент для просмотра сериалов и мультов с<br />известных сайтов adultmult.tv и zfilm-hd.com</p></body></html>", 0));
        label_3->setText(QApplication::translate("Dialog", "\302\251 \320\220\321\200\321\202\321\221\320\274 \320\241\321\203\320\277\321\200\321\203\320\275 (Efog)", 0));
        label_4->setText(QApplication::translate("Dialog", "\320\241\320\262\321\217\320\267\321\214: efog@yandex.ru", 0));
        label_5->setText(QApplication::translate("Dialog", "\320\232\321\200\320\270\321\202\320\270\320\272\320\260, \320\277\321\200\320\265\320\264\320\273\320\276\320\266\320\265\320\275\320\270\321\217 \320\270 \320\277\320\276\320\266\320\265\320\273\320\260\320\275\320\270\321\217 \320\277\321\200\320\270\320\275\320\270\320\274\320\260\321\216\321\202\321\201\321\217.", 0));
        label_6->setText(QApplication::translate("Dialog", "\320\220 \320\261\320\273\320\260\320\263\320\276\320\264\320\260\321\200\320\275\320\276\321\201\321\202\320\270 \321\201\321\216\320\264\320\260:", 0));
        label_7->setText(QApplication::translate("Dialog", "WebMoney -", 0));
        label_8->setText(QApplication::translate("Dialog", "\320\257\320\275\320\264\320\265\320\272\321\201.\320\224\320\265\320\275\321\214\320\263\320\270 -", 0));
        label_9->setText(QApplication::translate("Dialog", "R269820121654", 0));
        label_10->setText(QApplication::translate("Dialog", "410012028680152", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPWINDOW_H
