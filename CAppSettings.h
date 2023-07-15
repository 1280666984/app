#ifndef CAPPSETTINGS_H
#define CAPPSETTINGS_H
#include <QSettings>
#include <QScopedPointer>

class CAppSettings : QObject
{
    Q_OBJECT
public:
    explicit CAppSettings():QObject(){};
    explicit CAppSettings(const QString &appDataLocation);
    ~CAppSettings();

public:
    static CAppSettings& Singleton();

private:

public slots:
    //void reset();
private:
   QSettings  m_Settings;
   QString    m_appDataLocation;
};

#endif // CAPPSETTINGS_H
