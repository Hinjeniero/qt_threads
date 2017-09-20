
#include "MyQTimer.h"

void MyQTimer::run (){
    while (1){
	emit timeout();
	this->msleep(1000);
	
    }
}

    
void MyQTimer::doButton(){
    if(this->isRunning()){
	this->wait();
    }else{
	this->start();
    }
}

