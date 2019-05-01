// Copyright (c) 2019 Andrey E. Yaromenok
// MIT License
// https://raw.githubusercontent.com/ayaromenok/QtClassGenerator/master/LICENSE

#include "ywidget.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qInfo() << "Reference App: V0";

    YWidget w;
    w.show();

    return a.exec();
}
