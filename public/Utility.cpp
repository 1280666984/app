#include "Utility.h"
#include <QCoreApplication>

Utility::Utility(QWidget *parent)
    :QWidget(parent)
{
}

Utility::~Utility()
{    
}

QString Utility::GetAppDirPath()
{
   QString strAppDirPath = QCoreApplication::applicationDirPath();
   return strAppDirPath;
}
