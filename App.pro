greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
TEMPLATE = app
QT  += core gui sql  xml

OBJECTS_DIR = temp/obj
MOC_DIR = temp/moc
RCC_DIR = temp/rcc
RCC_DIR = temp/uic

#DESTDIR = ../../app/MeshServer

#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CAppSettings.cpp \
    CDataBase.cpp \
    CLoginWidget.cpp \
    CMainWidget.cpp \
    CSkinManage.cpp \
    public/Utility.cpp \
    main.cpp

HEADERS += \
    CAppSettings.h \
    CLoginWidget.h \
    CMainWidget.h \
    CSkinManage.h \
    CDataBase.h \
    public/Utility.h \
    databasessql.h

FORMS += \
    ui\login.ui

RESOURCES += \
    qrc.qrc

DISTFILES += \
    qss.qss



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

