/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *sendButton;
    QListWidget *listWidget;
    QPushButton *fileSendButton;
    QLabel *label_6;
    QLabel *label_5;
    QPushButton *fileSelectButton;
    QLineEdit *FileEdit;
    QLineEdit *messageLineEdit;
    QLineEdit *nicname;
    QLineEdit *portLineEdit;
    QLineEdit *ipLineEdit;
    QPushButton *connectButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(688, 505);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 20, 478, 431));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1, Qt::AlignRight);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1, Qt::AlignRight);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1, Qt::AlignRight);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 8, 0, 1, 1);

        sendButton = new QPushButton(gridLayoutWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        gridLayout->addWidget(sendButton, 8, 4, 1, 1);

        listWidget = new QListWidget(gridLayoutWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setAutoScroll(false);
        listWidget->setAutoScrollMargin(3);
        listWidget->setDefaultDropAction(Qt::IgnoreAction);
        listWidget->setMovement(QListView::Static);

        gridLayout->addWidget(listWidget, 7, 0, 1, 5);

        fileSendButton = new QPushButton(gridLayoutWidget);
        fileSendButton->setObjectName(QStringLiteral("fileSendButton"));

        gridLayout->addWidget(fileSendButton, 10, 4, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setFamily(QStringLiteral("Chilanka"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setTextFormat(Qt::AutoText);
        label_6->setScaledContents(false);

        gridLayout->addWidget(label_6, 0, 0, 1, 5, Qt::AlignHCenter);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 10, 0, 1, 1);

        fileSelectButton = new QPushButton(gridLayoutWidget);
        fileSelectButton->setObjectName(QStringLiteral("fileSelectButton"));

        gridLayout->addWidget(fileSelectButton, 10, 3, 1, 1);

        FileEdit = new QLineEdit(gridLayoutWidget);
        FileEdit->setObjectName(QStringLiteral("FileEdit"));

        gridLayout->addWidget(FileEdit, 10, 1, 1, 1);

        messageLineEdit = new QLineEdit(gridLayoutWidget);
        messageLineEdit->setObjectName(QStringLiteral("messageLineEdit"));

        gridLayout->addWidget(messageLineEdit, 8, 1, 1, 3);

        nicname = new QLineEdit(gridLayoutWidget);
        nicname->setObjectName(QStringLiteral("nicname"));

        gridLayout->addWidget(nicname, 3, 1, 1, 3);

        portLineEdit = new QLineEdit(gridLayoutWidget);
        portLineEdit->setObjectName(QStringLiteral("portLineEdit"));
        portLineEdit->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(portLineEdit, 2, 1, 1, 3);

        ipLineEdit = new QLineEdit(gridLayoutWidget);
        ipLineEdit->setObjectName(QStringLiteral("ipLineEdit"));
        ipLineEdit->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(ipLineEdit, 1, 1, 1, 3);

        connectButton = new QPushButton(gridLayoutWidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setEnabled(true);
        connectButton->setAutoFillBackground(false);
        connectButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(connectButton, 3, 4, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "IP \354\243\274\354\206\214:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\355\217\254\355\212\270:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\353\213\211\353\204\244\354\236\204:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\353\251\224\354\204\270\354\247\200:", Q_NULLPTR));
        sendButton->setText(QApplication::translate("Widget", "\354\240\204\354\206\241", Q_NULLPTR));
        fileSendButton->setText(QApplication::translate("Widget", "\354\240\204\354\206\241", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "EUI_WON CHATTING PROGRAM", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\355\214\214\354\235\274\354\240\204\354\206\241: ", Q_NULLPTR));
        fileSelectButton->setText(QApplication::translate("Widget", "\355\214\214\354\235\274 \354\204\240\355\203\235", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        connectButton->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        connectButton->setText(QApplication::translate("Widget", "\354\240\221\354\206\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
