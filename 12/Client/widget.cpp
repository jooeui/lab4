#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setLayout(ui->gridLayout);
    ui->FileEdit->setEnabled(false);
    ui->sendButton->setEnabled(false);
    ui->fileSelectButton->setEnabled(false);
    ui->fileSendButton->setEnabled(false);

    setWindowTitle("Chatting Client");
}

Widget::~Widget()
{
    delete ui;
    delete socket;
}

void Widget::readyRead()
{
    while(socket->canReadLine())
    {
        QString line=QString::fromUtf8(socket->readLine());
        line=line.left(line.length()-1);
        ui->listWidget->addItem(QString("%2").arg(line));
    }
    ui->listWidget->scrollToBottom();
}

void Widget::connected()
{
    socket->write(QString("새로운 유저가 접속했습니다!\nIP : "+ui->ipLineEdit->text()+" 닉네임 : "+ui->nicname->text()+"\n").toUtf8());
    ui->sendButton->setEnabled(true);
    ui->fileSelectButton->setEnabled(true);
    ui->fileSendButton->setEnabled(true);
}



void Widget::on_connectButton_clicked()
{
    socket=new QTcpSocket(this);

    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    connect(socket,SIGNAL(connected()),this,SLOT(connected()));
    socket->connectToHost(ui->ipLineEdit->text(),ui->portLineEdit->text().toInt());
}

void Widget::on_sendButton_clicked()
{
    QString message=ui->messageLineEdit->text().trimmed();
    QString nic=ui->nicname->text().trimmed();
    ct = time(NULL);
    tm = *localtime(&ct);
    sprintf(strTime, "[%02d:%02d:%02d]", tm.tm_hour, tm.tm_min, tm.tm_sec);

    if(!message.isEmpty())
    {
        socket->write(QString(strTime+nic+"> "+message+"\n").toUtf8());
    }
    ui->messageLineEdit->clear();
    ui->messageLineEdit->setFocus();
}

void Widget::on_fileSelectButton_clicked()
{
    QString filePath=QFileDialog::getOpenFileName(this,"open","../");
    if(false==filePath.isEmpty())
    {
        fileName.clear();
        //파일 정보 읽기 (읽기 전용 모드로 열림)
        QFileInfo info(filePath);
        fileName=info.fileName();//파일 이름 가져 오기
        //파일 이름 지정
        file.setFileName(filePath);
        //파일 열기
        bool isOK=file.open(QIODevice::ReadOnly);
        if(false == isOK)
        {
            qDebug()<<QString::fromUtf8("읽기 전용으로 열기 77");
        }

        ui->FileEdit->insert(filePath);
        ui->fileSelectButton->setEnabled(false);
        ui->fileSendButton->setEnabled(true);
    }
    else
    {
        qDebug()<<QString::fromUtf8("파일 디렉토리를 선택하는 중 오류가 발생했습니다!");
    }
}

void Widget::on_fileSendButton_clicked()
{
    QString nic=ui->nicname->text().trimmed();
    QString file=QString("%1").arg(fileName);
    ct = time(NULL);
    tm = *localtime(&ct);
    sprintf(strTime, "[%02d:%02d:%02d]", tm.tm_hour, tm.tm_min, tm.tm_sec);

    if(!file.isEmpty())
    {
        socket->write(QString(strTime+nic+"님이 "+file+" 파일을 보냈습니다!\n").toUtf8());
    }
    ui->fileSendButton->setEnabled(false);
    ui->fileSelectButton->setEnabled(true);
    ui->FileEdit->clear();
    ui->FileEdit->setFocus();
}

void Widget::on_messageLineEdit_returnPressed()
{
    on_sendButton_clicked();
}
