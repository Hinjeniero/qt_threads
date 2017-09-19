#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{	
    setupUi(this);
    show();
    connect(button, SIGNAL(clicked()), this, SLOT(doButton()));
}

ejemplo1::~ejemplo1()
{}

void ejemplo1::doButton()
{
    qDebug() << "click on button";
}

void ejemplo1::doCounter()
{
    static int count = 0;
    this->lcdNumber->display(count);
    count++;
}




