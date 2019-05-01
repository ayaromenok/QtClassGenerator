// Copyright (c) 2019 Andrey E. Yaromenok
// MIT License
// https://raw.githubusercontent.com/ayaromenok/QtClassGenerator/master/LICENSE

#ifndef YWIDGET_H
#define YWIDGET_H

#include <QWidget>
class QHBoxLayout;
class QVBoxLayout;
class QGroupBox;
class QStackedWidget;
class QLabel;
class QPushButton;
class QComboBox;

class YRootObject;


class YWidget : public QWidget
{
    Q_OBJECT

public:
    YWidget(QWidget *parent = 0);
    ~YWidget();
public slots:
    void updateObj(int index);
private:
    bool            setupUI();
    bool            setupObj();
    bool            setupSignalSlots();

    QHBoxLayout     *_loutMain;
    QGroupBox       *_gbLeft;
    QVBoxLayout         *_loutLeft;
    QLabel              *_lbLeft;
    QGroupBox       *_gbRight;
    QVBoxLayout         *_loutRight;
    QLabel              *_lbRight;
    QGroupBox       *_gbCtrl;
    QVBoxLayout         *_loutCtrl;
    QPushButton         *_pbCtrlExit;
    QComboBox           *_cbCtrlObjs;
    QStackedWidget      *_swCtrl;

    YRootObject         *_ro;
};

#endif // YWIDGET_H
