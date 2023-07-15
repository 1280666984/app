#include "cdatabase.h"
//#include "appsettings.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QMap>

CDataBase* CDataBase::m_AppDataBase = nullptr;
QString      CDataBase::m_s_dbPath = "./database";
QString      CDataBase::m_s_dbFile = "database.db";
int          CDataBase::m_s_dbPort = 3306;
QString      CDataBase::m_s_dbName = "localhost";                                   //<sql默认信息
QString      CDataBase::m_s_dbUser = "root";
QString      CDataBase::m_s_dbPasswd = "123456";

CDataBase *CDataBase::getAppDataBase()
{
    if(nullptr == m_AppDataBase){
        m_AppDataBase = new CDataBase;}
    return m_AppDataBase;
}

CDataBase ::CDataBase (QObject *parent)
    : QObject{parent}
{
/*  m_s_dbPort =   AppSettings::getSettings(DATABASE_PORT).toInt();
    m_s_dbName =   AppSettings::getSettings(DATABASE_NAME).toString();
    m_s_dbUser =   AppSettings::getSettings(DATABASE_USER).toString();
    m_s_dbPasswd = AppSettings::getSettings(DATABASE_PASSWD).toString();
    qDebug()<<m_s_dbPasswd<<123;
*/
}

CDataBase ::~CDataBase ()
{
    this->m_dataBase.close();
    QString connectiom = m_dataBase.connectionName();
    this->m_dataBase = QSqlDatabase();
    QSqlDatabase::removeDatabase(connectiom);
}


void CDataBase::insertData(const QString sqlStr,bool&b)
{
  QSqlQuery m_SqlQuery;
  qDebug("[SQL] %s",qPrintable(sqlStr));
  if(!m_SqlQuery.exec(sqlStr)){
    qWarning("[SQL] %s]",qPrintable(m_SqlQuery.lastError().text()));
    b = false;
  }
  b = true;
}

void CDataBase::deleteData(const QString sqlStr,bool&b)
{
   QSqlQuery m_SqlQuery;
   qDebug("[SQL] %s",qPrintable(sqlStr));
   if(!m_SqlQuery.exec(sqlStr)){
    qWarning("[SQL] %s",qPrintable(m_SqlQuery.lastError().text()));
    b = false;
   }
    b = true;
}

void CDataBase::updateData(const QString sqlStr,bool&b)
{
   QSqlQuery m_SqlQuery;
   qDebug("[SQL] %s",qPrintable(sqlStr));
   if(!m_SqlQuery.exec(sqlStr)){
    qWarning("[SQL] %s",qPrintable(m_SqlQuery.lastError().text()));
    b = false;
   }
    b = true;
}

void CDataBase::selectData(const QString sqlStr, QList<QMap<QString, QVariant> > &valuesList ,bool&b)
{
   QSqlQuery m_SqlQuery;
   qDebug("[SQL] %s",qPrintable(sqlStr));
   if(!m_SqlQuery.exec(sqlStr)){
       qWarning("[SQL %s]",qPrintable(m_SqlQuery.lastError().text()));
       b = false;
    }

   for( int r=0; m_SqlQuery.next(); r++){
       QSqlRecord rec = m_SqlQuery.record();
       QMap<QString,QVariant>  vmap;
       vmap.clear();
       for( int c  = 0; c<rec.count();c++){
           vmap[rec.fieldName(c)] = rec.value(c);}
       valuesList.append(vmap);
   }
   b = true;
}


bool CDataBase::openDatabase(const QString dbFileName)
{  
    m_dataBase = QSqlDatabase::addDatabase("QMYSQL");
    m_dataBase.setHostName(m_s_dbName);
    m_dataBase.setPort(m_s_dbPort);
    m_dataBase.setUserName(m_s_dbUser);
    m_dataBase.setPassword(m_s_dbPasswd);
    m_dataBase.setDatabaseName(dbFileName);
    if(!m_dataBase.open()){
        qDebug("[SQL] %s",qPrintable(QString("Connect database %1 error %2").arg(dbFileName,m_dataBase.lastError().text())));
        return false;}
    else{
        qDebug("[SQL]%s",qPrintable(QString("Connect database %1 error %2").arg(dbFileName,"succeed")));
        return true;}
}


bool CDataBase::initDatabase()
{
    if(m_dataBase.open()){
        qDebug("[SQL],%s",qPrintable(SQL_CREATE_LOGININFO));
        QSqlQuery m_SqlQuery;
        if(!m_SqlQuery.exec(SQL_CREATE_LOGININFO)){
            qWarning("[SQL] %s",qPrintable(m_SqlQuery.lastError().text()));  //<login
            return false;
        }

        qDebug("[SQL],%s",qPrintable(SQL_CREATE_USERINFO));
        if(!m_SqlQuery.exec(SQL_CREATE_USERINFO)){
            qWarning("[SQL] %s",qPrintable(m_SqlQuery.lastError().text()));   //<user
            return false;
        }
        return true;
    }
    else{
        qWarning("Init database failed,database is not open.");
        return false;
    }

}




