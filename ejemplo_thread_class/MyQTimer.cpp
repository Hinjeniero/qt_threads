
#include "MyQTimer.h"

void MyQTimer::run (){
    while (true){
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

