// Copyright (c) 2019 Andrey E. Yaromenok
// MIT License
// https://raw.githubusercontent.com/ayaromenok/QtClassGenerator/master/LICENSE

#include "ywidget.h"
#include "yobj/yrootobject.h"
#include <QtWidgets>

YWidget::YWidget(QWidget *parent)
    : QWidget(parent)
{
    qInfo() << QDateTime::currentMSecsSinceEpoch() << __PRETTY_FUNCTION__;
    if (!setupUI()){
        qWarning() << "someting wrong with UI\nExiting..";
        QCoreApplication::exit(-1);
    }
    if(!setupObj()){
        qWarning() << "someting wrong with Objects\nExiting..";
        QCoreApplication::exit(-1);
    }
}

YWidget::~YWidget()
{
    qInfo() << QDateTime::currentMSecsSinceEpoch() << __PRETTY_FUNCTION__;
}

bool
YWidget::setupUI()
{
    qInfo() << QDateTime::currentMSecsSinceEpoch() << __PRETTY_FUNCTION__;

    _loutMain = new QHBoxLayout(this);
    if (!_loutMain) {qWarning() << "_loutMain issue"; return false;}

    _gbLeft = new QGroupBox("Left", this);
    if (!_gbLeft){qWarning() << "_gbLeft issue"; return false;}
    _loutLeft = new QVBoxLayout(_gbLeft);
    if (!_loutLeft) {qWarning() << "_loutLeft issue"; return false;}
    _lbLeft = new QLabel("label:Left");
    if (!_lbLeft) {qWarning() << "_lbLeft issue"; return false;}
    _loutLeft->addWidget(_lbLeft);
    _gbLeft->setLayout(_loutLeft);

    _gbRight = new QGroupBox("Right", this);
    if (!_gbRight){qWarning() << "_gbRight issue"; return false;}
    _loutRight = new QVBoxLayout(_gbRight);
    if (!_loutRight) {qWarning() << "_loutRight issue"; return false;}
    _lbRight = new QLabel("label:Right");
    if (!_lbRight) {qWarning() << "_lbRight issue"; return false;}
    _loutRight->addWidget(_lbRight);
    _gbRight->setLayout(_loutRight);

    _gbCtrl = new QGroupBox("Controls", this);
    if (!_gbCtrl){qWarning() << "_gbCtrls issue"; return false;}
    _loutCtrl = new QVBoxLayout(_gbCtrl);
    if (!_loutCtrl) {qWarning() << "_loutCtrl issue"; return false;}
    _pbCtrlExit = new QPushButton("E&xit");
    if (!_pbCtrlExit) {qWarning() << "_pbCtrlExit issue"; return false;}
    _cbCtrlObjs = new QComboBox();
    _cbCtrlObjs->addItems(QStringList() << "obj #0" << "obj #1" << "obj #2");
    if (!_cbCtrlObjs) {qWarning() << "_cbCtrlObjs issue"; return false;}
    _swCtrl = new QStackedWidget();
    if (!_swCtrl) {qWarning() << "_swCtrl issue"; return false;}

    _loutCtrl->addWidget(_pbCtrlExit);
    _loutCtrl->addWidget(_cbCtrlObjs);
    _loutCtrl->addWidget(_swCtrl);
    _gbCtrl->setLayout(_loutCtrl);

    _loutMain->addWidget(_gbLeft);
    _loutMain->addWidget(_gbRight);
    _loutMain->addWidget(_gbCtrl);

    setGeometry(100, 100, 854, 480);
    setLayout(_loutMain);
    setWindowTitle("ReferenceApp V0");

    setupSignalSlots();

    return true;
}

bool
YWidget::setupSignalSlots()
{
    qInfo() << QDateTime::currentMSecsSinceEpoch() << __PRETTY_FUNCTION__;
    connect(_pbCtrlExit, SIGNAL(clicked()), this, SLOT(close()));
    connect(_cbCtrlObjs, QOverload<int>::of(&QComboBox::activated),
            this, &YWidget::updateObj);
    return true;
}

bool
YWidget::setupObj()
{
    qInfo() << QDateTime::currentMSecsSinceEpoch() << __PRETTY_FUNCTION__;

    _ro = new YRootObject();
    if (!_ro) {qWarning() << "_yro issue"; return false;}
    return true;
}

void
YWidget::updateObj(int index)
{
    qInfo() << QDateTime::currentMSecsSinceEpoch() << __PRETTY_FUNCTION__
            << index;
}
