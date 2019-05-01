// Copyright (c) 2019 Andrey E. Yaromenok
// MIT License
// https://raw.githubusercontent.com/ayaromenok/QtClassGenerator/master/LICENSE

#ifndef YROOTOBJECT_H
#define YROOTOBJECT_H

#include <QObject>
#include <QMap>
class QWidget;
class QStackedWidget;

class YRootObject : public QObject
{
    Q_OBJECT
public:
    explicit YRootObject(QObject *parent = nullptr);
    ~YRootObject();

signals:

public slots:
    virtual void setParams(QMap<QString, QVariant> & params);

protected:
    virtual bool            setupUI();
    QMap<QString, QVariant> _p;
    QWidget                 *_wCtrl;
};

#endif // YROOTOBJECT_H
