#ifndef CSKINMANAGE_H
#define CSKINMANAGE_H
#include <QObject>
#include <QFile>

class CMainWidget;
class CSkinManage : public QObject
{
    Q_OBJECT   
public:
    CSkinManage(QObject *parent = nullptr);
    ~CSkinManage();

    static CSkinManage& getInstance();
    void initAppStyle(const QString&  strFilePath);

private:
    QFile m_file;
};

#endif // CSKINMANAGE_H
