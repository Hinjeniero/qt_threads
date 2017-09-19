#ifndef ejemplo1_H
#define ejemplo1_H

#include <QtGui>
#include <QTimer>
#include "ui_counterDlg.h"
#include "thread.h"

class ejemplo1 : public QWidget, public Ui_Counter
{
Q_OBJECT
private:
    thread my_thread;
public:
    ejemplo1();
    virtual ~ejemplo1();
    
public slots:
    void doButton();
    void doCounter();
};

#endif // ejemplo1_H
