#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{	
    this->timer = new QTimer();
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
    if (this->timer->isActive()){
      qDebug() << "Stopped counter";
      button->setText("Resume");
      this->timer->stop();
    }else{
      qDebug() << "Resuming counter";
      button->setText("Stop again");
      this->timer->start(1000);
    }
}

void ejemplo1::doCounter()
{
    static int count = 0;
    count++;
    this->lcdNumber->display(count);
}




