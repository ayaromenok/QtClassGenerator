#include "yawidgetv0.h"
#include <QtWidgets>

YaWidgetV0::YaWidgetV0(QWidget *parent)
    : QWidget(parent)
{
    qInfo() << QDateTime::currentMSecsSinceEpoch() << __PRETTY_FUNCTION__;
    if (!setupUI()){
        qWarning() << "someting wrong with UI\nExiting..";
        QCoreApplication::exit(-1);
    }
}

YaWidgetV0::~YaWidgetV0()
{
    qInfo() << QDateTime::currentMSecsSinceEpoch() << __PRETTY_FUNCTION__;
}

bool
YaWidgetV0::setupUI()
{
    qInfo() << QDateTime::currentMSecsSinceEpoch() << __PRETTY_FUNCTION__;

    _loutMain = new QHBoxLayout(this);
    if (!_loutMain) {qWarning() << "_loutMain issue"; return false;}

    _gbLeft = new QGroupBox("Left", this);
    if (!_gbLeft){qWarning() << "_gbLeft issue"; return false;}

    _gbRight = new QGroupBox("Right", this);
    if (!_gbRight){qWarning() << "_gbRight issue"; return false;}

    _gbCtrl = new QGroupBox("Controls", this);
    if (!_gbCtrl){qWarning() << "_gbCtrls issue"; return false;}

    _loutMain->addWidget(_gbLeft);
    _loutMain->addWidget(_gbRight);
    _loutMain->addWidget(_gbCtrl);

    setGeometry(100, 100, 854, 480);
    setLayout(_loutMain);
    setWindowTitle("ReferenceApp V0");
    return true;
}
