/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QToolButton *toolButton_3;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QComboBox *comboBox;
    QLineEdit *lineEdit_2;
    QWidget *page_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QToolButton *toolButton_7;
    QToolButton *toolButton_10;
    QToolButton *toolButton_11;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(800, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(47);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        Login->setMinimumSize(QSize(800, 500));
        Login->setMaximumSize(QSize(800, 500));
        Login->setStyleSheet(QString::fromUtf8("QWidget#Login{\n"
"	background-image: url(:/qrc/img.png);\n"
"}\n"
"\n"
"\n"
""));
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 40, 471, 261));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/qrc/lib1.gif")));
        toolButton = new QToolButton(Login);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(730, 10, 25, 25));
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton#toolButton\n"
"{   \n"
"   border:one;\n"
"   image: url(:/qrc/min.png);\n"
"}\n"
"QToolButton#toolButton:hover \n"
"{   \n"
"	background-color: rgba(255, 255, 255,200);  \n"
"    border-radius: 5px;\n"
"}"));
        toolButton->setIconSize(QSize(16, 16));
        toolButton_2 = new QToolButton(Login);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(760, 10, 25, 25));
        toolButton_2->setStyleSheet(QString::fromUtf8("QToolButton#toolButton_2{\n"
"    border:one;\n"
"	image: url(:/qrc/up.png);\n"
"}\n"
"\n"
"QToolButton#toolButton_2:hover{	\n"
"    border:one;\n"
"    background-color: rgba(255, 255, 255,200);  \n"
"    border-radius: 5px;\n"
"}"));
        toolButton_4 = new QToolButton(Login);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setGeometry(QRect(20, 460, 51, 21));
        toolButton_4->setStyleSheet(QString::fromUtf8("QToolButton#toolButton_4{\n"
"     border:one;\n"
"     border-radius:10px;\n"
"     background-color:rgb(0, 170, 127)\n"
"}\n"
"QToolButton#toolButton_4:hover{\n"
"     background-color:rgba(0,170,127,200)\n"
"}"));
        stackedWidget = new QStackedWidget(Login);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(160, 300, 471, 121));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget{         \n"
"      background-color: rgba(255, 255, 255,200);\n"
"      border-bottom-left-radius:20px;\n"
"      border-bottom-right-radius:20px;   \n"
"}"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("#page{                             \n"
"      border-bottom-left-radius:20px;\n"
"      border-bottom-right-radius:20px;       \n"
"}"));
        toolButton_3 = new QToolButton(page);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setGeometry(QRect(110, 70, 241, 21));
        toolButton_3->setStyleSheet(QString::fromUtf8("QToolButton#toolButton_3{\n"
"    border:one;\n"
"    border-radius: 8px;			\n"
"	background-color: rgb(99, 170, 117);\n"
"     font-size :15px ; \n"
"    font-weight:lighter;       \n"
"}\n"
"QToolButton#toolButton_3:hover{   	\n"
"	background-color: rgba(99, 170, 117,200);\n"
"}"));
        toolButton_5 = new QToolButton(page);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        toolButton_5->setGeometry(QRect(110, 10, 24, 22));
        toolButton_5->setStyleSheet(QString::fromUtf8("QToolButton#toolButton_5{\n"
"    border:one;\n"
"	image: url(:/qrc/Account.png);\n"
"}"));
        toolButton_6 = new QToolButton(page);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        toolButton_6->setGeometry(QRect(110, 40, 24, 22));
        toolButton_6->setStyleSheet(QString::fromUtf8("QToolButton#toolButton_6{	\n"
"    border:one;\n"
"	image: url(:/qrc/password .png);\n"
"}"));
        comboBox = new QComboBox(page);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(140, 10, 181, 21));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"   border-radius: 10px;\n"
"   border : 2px inset green;\n"
"   padding-left: 20px;\n"
"}\n"
"QComboBox:hover,QComboBox:checked{\n"
"   border : 2px inset red;\n"
"}\n"
"QComboBox::drop-down{   \n"
"	border-image: url(:/qrc/update.png);\n"
"}\n"
"QComboBox:drop-down:on{   	\n"
"	border-image: url(:/qrc/update1.png);\n"
"}\n"
"QComboBox QAbstractItemView{        \n"
"	   background-color: rgb(255, 255, 255);\n"
"       selection-background-color: rgb(85, 170, 0); \n"
"	   outline: 0px;\n"
"}\n"
"QComboBox QAbstractItemView::item{\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 40, 181, 21));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit#lineEdit_2{\n"
"   border-radius: 10px;\n"
"   border : 2px inset green;\n"
"   padding-left: 20px;   \n"
"}\n"
"QLineEdit#lineEdit_2:hover,QLineEdit#lineEdit_2:checked{\n"
"   border : 2px inset red;    \n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setStyleSheet(QString::fromUtf8("#page_2{                               \n"
"      border-bottom-left-radius:20px;\n"
"      border-bottom-right-radius:20px;       \n"
"}"));
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 10, 181, 21));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit#lineEdit{\n"
"   border-radius: 10px;\n"
"   border : 2px inset green;\n"
"   padding-left: 20px;   \n"
"}\n"
"QLineEdit#lineEdit:hover,QLineEdit#lineEdit_2:checked{\n"
"   border-radius: 10px;\n"
"   border : 2px inset red;\n"
"   padding-left: 20px;   \n"
"}"));
        lineEdit_3 = new QLineEdit(page_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 40, 181, 21));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit#lineEdit_3{\n"
"   border-radius: 10px;\n"
"   border : 2px inset green;\n"
"   padding-left: 20px;   \n"
"}\n"
"QLineEdit#lineEdit_3:hover,QLineEdit#lineEdit_2:checked{\n"
"   border : 2px inset red;\n"
"}"));
        toolButton_7 = new QToolButton(page_2);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        toolButton_7->setGeometry(QRect(110, 10, 24, 22));
        toolButton_7->setStyleSheet(QString::fromUtf8("QToolButton#toolButton_7{\n"
"    border:one;\n"
"	image: url(:/qrc/Account.png);\n"
"}"));
        toolButton_10 = new QToolButton(page_2);
        toolButton_10->setObjectName(QString::fromUtf8("toolButton_10"));
        toolButton_10->setGeometry(QRect(110, 40, 24, 22));
        toolButton_10->setStyleSheet(QString::fromUtf8("QToolButton#toolButton_10{	\n"
"    border:one;\n"
"	image: url(:/qrc/password .png);\n"
"}"));
        toolButton_11 = new QToolButton(page_2);
        toolButton_11->setObjectName(QString::fromUtf8("toolButton_11"));
        toolButton_11->setGeometry(QRect(110, 70, 241, 21));
        toolButton_11->setStyleSheet(QString::fromUtf8("QToolButton#toolButton_11{\n"
"    border:one;\n"
"    border-radius: 8px;			\n"
"	background-color: rgb(99, 170, 117);\n"
"     font-size :15px ; \n"
"\n"
"}\n"
"QToolButton#toolButton_11:hover{		\n"
"	background-color: rgba(99, 170, 117,200);\n"
"}"));
        stackedWidget->addWidget(page_2);

        retranslateUi(Login);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "login", nullptr));
        label->setText(QString());
        toolButton->setText(QString());
        toolButton_2->setText(QString());
        toolButton_4->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        toolButton_3->setText(QCoreApplication::translate("Login", "Login", nullptr));
        toolButton_5->setText(QString());
        toolButton_6->setText(QString());
        toolButton_7->setText(QString());
        toolButton_10->setText(QString());
        toolButton_11->setText(QCoreApplication::translate("Login", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
