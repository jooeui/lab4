#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include <QFile>
#include <QString>
#include <QHostAddress>
#include <QTimer>
#include <QFileDialog>

namespace Ui {
class Widget;
}

class QTcpSocket;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void readyRead(); //서버로부터 메시지가 온경우
    void connected(); //연결이 완료되었으면 서버에게 연결되었다고 알림
    void on_connectButton_clicked(); //연결 버튼을 누름
    void on_sendButton_clicked(); //채팅 메세지 전송 버튼을 누름
    void on_fileSelectButton_clicked(); //파일 선택 버튼 누름
    void on_fileSendButton_clicked(); //파일 전송 버튼 누름

    void on_messageLineEdit_returnPressed();

private:
    Ui::Widget *ui;
    QTcpSocket* socket; //나의 소켓
    time_t ct;
    struct tm tm;
    char strTime[50];
    QFile file;
    QString fileName;
    QTimer timer;
};

#endif // WIDGET_H
