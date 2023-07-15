#ifndef UTILITY_H
#define UTILITY_H

#include <QWidget>

class Utility : QWidget
{
    Q_OBJECT
public:
    Utility(QWidget* parent);
    ~Utility();

    static QString GetAppDirPath();
private:

};

#endif // UTILITY_H
