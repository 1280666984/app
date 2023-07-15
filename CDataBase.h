#ifndef AppDataBase_H
#define AppDataBase_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>
#include <QObject>
#include <QSettings>
#include "databasessql.h"

class CDataBase  : public QObject
{
    Q_OBJECT
public:
   static CDataBase* getAppDataBase();                                                       //<get数据库的接口
   bool initDatabase();                                                                      //< 初始化数据库
   ~CDataBase ();
public slots:
   void insertData(const QString sqlStr,bool &b);                                            //<数据库的增
   void deleteData(const QString sqlStr,bool &b);                                            //<数据库的删
   void updateData(const QString sqlStr,bool &b);                                            //<数据库的改
   void selectData(const QString sqlStr, QList<QMap<QString,QVariant>> &valuesList ,bool& b);//<数据库的查
   bool openDatabase(const QString dbFileName);                                              //<打开数据库


private:
    explicit CDataBase (QObject * parent =nullptr) ;                                        //< 读取配置文件
    CDataBase (const CDataBase & AppDataBase ) = delete;                                  //< 单例删除拷贝
    CDataBase & operator = (const CDataBase &) = delete;                                  //< 单例删除operator=

signals:

private:
    static CDataBase * m_AppDataBase;

    static QString m_s_dbPath;
    static QString m_s_dbFile;
    static int     m_s_dbPort;
    static QString m_s_dbName;
    static QString m_s_dbUser;
    static QString m_s_dbPasswd;

    QString       m_qstrFilename;
    QSettings*    appSettingsInstance;
    QSqlDatabase  m_dataBase;
};

#endif // AppDataBase _H
