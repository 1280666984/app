#include "CAppSettings.h"
#include <QFile>

static QScopedPointer<CAppSettings> instance;
static QString  AppDataForSession;
static const  QString APP_DATA_DIR_KEY("appadatadir");
static const  QString SHOTCUT_INI_FILENAME("/config/config.ini");

CAppSettings &CAppSettings::Singleton()
{
    if(!instance){
        if(AppDataForSession.isEmpty()){
            instance.reset(new CAppSettings);
            if(instance->m_Settings.value(APP_DATA_DIR_KEY).isValid()
                    && QFile::exists(instance->m_Settings.value(APP_DATA_DIR_KEY).toString() + SHOTCUT_INI_FILENAME))
                instance.reset(new CAppSettings(instance->m_Settings.value(APP_DATA_DIR_KEY).toString() + SHOTCUT_INI_FILENAME));
        }else{
            instance.reset(new CAppSettings(AppDataForSession));
        }

    }
    return *instance;
}
CAppSettings::CAppSettings(const QString &appDataLocation)
    :m_Settings(appDataLocation + SHOTCUT_INI_FILENAME,QSettings::IniFormat)
    ,m_appDataLocation(appDataLocation)
{
}

CAppSettings::~CAppSettings()
{

}


