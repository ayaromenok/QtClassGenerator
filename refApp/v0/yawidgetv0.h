#ifndef YAWIDGETV0_H
#define YAWIDGETV0_H

#include <QWidget>
class QHBoxLayout;
class QGroupBox;

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
    QGroupBox       *_gbRight;
    QGroupBox       *_gbCtrl;
};

#endif // YAWIDGETV0_H
