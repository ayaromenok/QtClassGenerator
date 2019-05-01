// Copyright (c) 2019 Andrey E. Yaromenok
// MIT License
// https://raw.githubusercontent.com/ayaromenok/QtClassGenerator/master/LICENSE

#include "yrootobject.h"
#include <QtWidgets>
#include <QDebug>

YRootObject::YRootObject(QObject *parent) : QObject(parent)
{
    qInfo() << __PRETTY_FUNCTION__;
    setObjectName("YRootObject");
    setupUI();
}

YRootObject::~YRootObject()
{
    qInfo() << __PRETTY_FUNCTION__;
}

void
YRootObject::setParams(QMap<QString, QVariant> & params)
{
    qInfo() << __PRETTY_FUNCTION__;
    _p = params;
    if(_p.contains("dumpParamsToCon")){
        if(_p.value("dumpParamsToCon").toBool()){
            qInfo() << objectName() << params;
        }
    }
}

bool
YRootObject::setupUI()
{
    qInfo() << __PRETTY_FUNCTION__;
    _wCtrl = new QWidget;
    QVBoxLayout *lout = new QVBoxLayout();
    if (!lout) {qWarning() << "lout issue"; return false;}
    QLabel      *lb = new QLabel("YRootObject UI stub");
    if (!lb) {qWarning() << "lb issue"; return false;}
    lout->addWidget(lb);
    _wCtrl->setLayout(lout);
    return true;
}
