#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{	
    this->my_thread = thread();
    setupUi(this);
    show();
    connect(button, SIGNAL(clicked()), this->my_thread, SLOT(doButton()));
    connect(this->my_thread, SIGNAL(timeout()), this, SLOT(doCounter()));
    this->my_thread.run();
}

ejemplo1::~ejemplo_thread_class()
{}

void ejemplo1::doCounter()
{
    static int count = 0;
    count++;
    this->lcdNumber->display(count);
}




