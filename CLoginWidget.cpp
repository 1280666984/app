#include <QKeyEvent>
#include <QLineEdit>
#include <QMessageBox>
#include <QMouseEvent>
#include <QMovie>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QString>
#include <QTimer>

#include "CLoginWidget.h"

CLoginWidget::CLoginWidget(QWidget *parent)
    : QWidget(parent),ui(new Ui::Login)
{
   initView(); //初始化视图
}

CLoginWidget::~CLoginWidget()
{
    delete ui;
}

void CLoginWidget::initView()
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);//无边框
    this->setAttribute(Qt::WA_StyledBackground);
    //this->setAttribute(Qt::WA_TranslucentBackground);
    QMovie * movie =new QMovie(this);   //动画初始化
    movie->setFileName(":/img/lib1.gif");
    movie->start();
    ui->label->setMovie(movie);

    m_move = false;  //窗口判断移动变量初始化

    //账号的的添加列表问题
    ui->comboBox->setEditable(true);
    lineEdit = new QLineEdit(this);
    ui->comboBox->setLineEdit(lineEdit);

    //eventFilter 事件分发器的安装
    ui->comboBox->installEventFilter(this);
    ui->lineEdit_2->installEventFilter(this);
    this->installEventFilter(this);

    m_b_login = false;
}

void CLoginWidget::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Space) //空格触发login登录
    {
        emit ui->toolButton_3->clicked();
    }
    return QWidget::keyPressEvent(event);
}

void CLoginWidget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        this->reltvpos = event->pos();
        m_move = true;
    }
    return QWidget::mousePressEvent(event);
}

void CLoginWidget::mouseMoveEvent(QMouseEvent *event)
{
    if(m_move){
        move(event->globalPos()-reltvpos);
    }
    return QWidget::mouseMoveEvent(event);

}

void CLoginWidget::mouseReleaseEvent(QMouseEvent *event)
{
    m_move = false;
    return QWidget::mouseReleaseEvent(event);
}

bool CLoginWidget::eventFilter(QObject *wcg, QEvent *event)
{
    if( this == wcg ){
        if(event ->type() ==QEvent::MouseButtonPress){
            if(ui->comboBox->hasFocus()){
                ui->comboBox->clearFocus();
            }
            else if(ui->lineEdit_2->hasFocus()){
                ui->lineEdit_2->clearFocus();
            }
        }
    }
    return QWidget::eventFilter(wcg,event);
}


