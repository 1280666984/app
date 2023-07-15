#include <QScopedPointer>
#include <QApplication>
#include <QMessageBox>
#include <QDebug>

#include "CSkinManage.h"

static  QScopedPointer<CSkinManage> appSkin;
CSkinManage& CSkinManage::getInstance()
{
    if(!appSkin)
       appSkin.reset(new CSkinManage);
    return *appSkin;
}

CSkinManage::CSkinManage(QObject *parent)
    : QObject(parent){}

CSkinManage::~CSkinManage(){}

void CSkinManage::initAppStyle(const QString &strFilePath)
{
    if(strFilePath.isEmpty())
        return;
    m_file.setFileName(strFilePath);
    if(!m_file.open(QFile::ReadOnly))
        return;
    QString strStyleSheet = QLatin1String(m_file.readAll());
    if(strStyleSheet.isEmpty())
        return;

    qApp->setStyleSheet(strStyleSheet);
}






