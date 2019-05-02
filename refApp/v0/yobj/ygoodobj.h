// Copyright (c) 2019 Andrey E. Yaromenok
// MIT License
// https://raw.githubusercontent.com/ayaromenok/QtClassGenerator/master/LICENSE

#ifndef YGOODOBJ_H
#define YGOODOBJ_H

#include <QObject>
#include "yobj/yrootobject.h"

class YGoodObj : public YRootObject
{
public:
    YGoodObj();
    ~YGoodObj();

public slots:
    void setParams(QMap<QString, QVariant> & params);
protected:
    bool            setupUI();
};

#endif // YGOODOBJ_H
