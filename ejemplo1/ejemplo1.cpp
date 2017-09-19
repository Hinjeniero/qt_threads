#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{	
    this->timer->start(1000);
    setupUi(this);
    show();
    connect(button, SIGNAL(clicked()), this, SLOT(doButton()));
    connect(this->timer, SIGNAL(timeout()), this, SLOT(doCounter()));
}

ejemplo1::~ejemplo1()
{}

void ejemplo1::doButton()
{
    qDebug() << "click on counter";
    if (this->timer->isActive()){
      this->timer->stop();
    }else{
      this->timer->start(1000);
    }
}

void ejemplo1::doCounter()
{
    static int count = 0;
    count++;
    this->lcdNumber->display(count);
}




