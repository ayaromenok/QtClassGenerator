#include "ygoodobj.h"
#include <QtWidgets>
#include <QDebug>

YGoodObj::YGoodObj()
{
    qInfo() << QDateTime::currentMSecsSinceEpoch() << __PRETTY_FUNCTION__;
    setObjectName("YGoodObj");
    setupUI();
}

YGoodObj::~YGoodObj()
{
    qInfo() << QDateTime::currentMSecsSinceEpoch() << __PRETTY_FUNCTION__;
}

void
YGoodObj::setParams(QMap<QString, QVariant> & params)
{
    qInfo() << QDateTime::currentMSecsSinceEpoch() << __PRETTY_FUNCTION__;
}

bool
YGoodObj::setupUI()
{
    qInfo() << QDateTime::currentMSecsSinceEpoch() << __PRETTY_FUNCTION__;
    return true;
}
