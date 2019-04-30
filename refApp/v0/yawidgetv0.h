#ifndef YAWIDGETV0_H
#define YAWIDGETV0_H

#include <QWidget>
class QHBoxLayout;
class QVBoxLayout;
class QGroupBox;
class QStackedWidget;
class QLabel;
class QPushButton;

class YaWidgetV0 : public QWidget
{
    Q_OBJECT

public:
    YaWidgetV0(QWidget *parent = 0);
    ~YaWidgetV0();

private:
    bool            setupUI();

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
    QStackedWidget      *_swCtrl;
};

#endif // YAWIDGETV0_H
