#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{	
    this->timer.start();
    setupUi(this);
    show();
    connect(button, SIGNAL(clicked()), &this->timer, SLOT(doButton()));
    connect(&this->timer, SIGNAL(timeout()), this, SLOT(doCounter()));
}

ejemplo1::~ejemplo1()
{}

void ejemplo1::doCounter()
{
    static int count = 0;
    count++;
    this->lcdNumber->display(count);
}




