#include <QApplication>
#include <QSplashScreen>
#include <QtGlobal>
#include <QTextCodec>
#include <QDebug>

#include "CMainWidget.h"
#include "CLoginWidget.h"
#include "CSkinManage.h"
#include "public/Utility.h"
int main(int argc, char *argv[])
{
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);

    QApplication a(argc, argv);
    QSplashScreen splash(QPixmap(":/img/img1.png"));//登录动画
    splash.show();
    a.processEvents();

    qDebug()<<QString::fromUtf8("你好");

    QString strAppDirPath = Utility::GetAppDirPath();
    CSkinManage::getInstance().initAppStyle(strAppDirPath + "/../style/qss.qss");

    CMainWidget w;
    CLoginWidget login;
    login.show();

    splash.finish(&login);
    return a.exec();
}



