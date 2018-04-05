/********************************************************************************
** Form generated from reading UI file 'QtWebTest.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWEBTEST_H
#define UI_QTWEBTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWebTestClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QPushButton *pushButton_front;
    QPushButton *pushButton_refresh;
    QLineEdit *lineEdit_url;
    QPushButton *pushButton_go;

    void setupUi(QWidget *QtWebTestClass)
    {
        if (QtWebTestClass->objectName().isEmpty())
            QtWebTestClass->setObjectName(QStringLiteral("QtWebTestClass"));
        QtWebTestClass->resize(672, 530);
        verticalLayout = new QVBoxLayout(QtWebTestClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_back = new QPushButton(QtWebTestClass);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));

        horizontalLayout->addWidget(pushButton_back);

        pushButton_front = new QPushButton(QtWebTestClass);
        pushButton_front->setObjectName(QStringLiteral("pushButton_front"));

        horizontalLayout->addWidget(pushButton_front);

        pushButton_refresh = new QPushButton(QtWebTestClass);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));

        horizontalLayout->addWidget(pushButton_refresh);

        lineEdit_url = new QLineEdit(QtWebTestClass);
        lineEdit_url->setObjectName(QStringLiteral("lineEdit_url"));

        horizontalLayout->addWidget(lineEdit_url);

        pushButton_go = new QPushButton(QtWebTestClass);
        pushButton_go->setObjectName(QStringLiteral("pushButton_go"));

        horizontalLayout->addWidget(pushButton_go);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QtWebTestClass);

        QMetaObject::connectSlotsByName(QtWebTestClass);
    } // setupUi

    void retranslateUi(QWidget *QtWebTestClass)
    {
        QtWebTestClass->setWindowTitle(QApplication::translate("QtWebTestClass", "QtWebTest", nullptr));
        pushButton_back->setText(QApplication::translate("QtWebTestClass", "\345\220\216\351\200\200", nullptr));
        pushButton_front->setText(QApplication::translate("QtWebTestClass", "\345\211\215\350\277\233", nullptr));
        pushButton_refresh->setText(QApplication::translate("QtWebTestClass", "\345\210\267\346\226\260", nullptr));
        pushButton_go->setText(QApplication::translate("QtWebTestClass", "GO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWebTestClass: public Ui_QtWebTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWEBTEST_H
