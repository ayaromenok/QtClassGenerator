#include "yawidgetv0.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qInfo() << "Reference App V0";

    YaWidgetV0 w;
    w.show();

    return a.exec();
}
