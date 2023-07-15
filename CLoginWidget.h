#ifndef CLOGINWIDGET_H
#define CLOGINWIDGET_H
#include <QWidget>
#include <QLineEdit>

#include "ui_login.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CLoginWidget; }
QT_END_NAMESPACE

class CLoginWidget : public QWidget
{
    Q_OBJECT
public:
    CLoginWidget(QWidget *parent = nullptr);
    ~CLoginWidget();

    void initView();

protected:
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event );
    void mouseReleaseEvent(QMouseEvent * event);
    bool eventFilter(QObject *wcg , QEvent * event);

private:
    Ui::Login *ui; //!

    QLineEdit * lineEdit;
    QPoint reltvpos;  //!移动的点
    bool m_move;      //移动bool变量

    bool m_b_login;
    bool m_b_signup;
};
#endif // CLOGINWIDGET_H
