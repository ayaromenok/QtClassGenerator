# Copyright (c) 2019 Andrey E. Yaromenok
# MIT License
# https://raw.githubusercontent.com/ayaromenok/QtClassGenerator/master/LICENSE

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ReferenceAppv0
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += c++11

SOURCES += \
        main.cpp \
        yobj/ygoodobj.cpp \
        yobj/yrootobject.cpp \
        ywidget.cpp

HEADERS += \
        yobj/ygoodobj.h \
        yobj/yrootobject.h \
        ywidget.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
