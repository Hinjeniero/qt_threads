
#include "thread.h"

void thread::thread(){
    count = 0;
}

int thread::getCount(){
    this->count_lock.acquire();
    return this->count;
    this->count_lock.release();
}

void thread::run (){
    while (1){
	this->count_lock.acquire();
	this->count++;
	this->count_lock.release();
	emit timeout();
	this->workerThread.msleep(1000);
	
    }
}
    
void thread::doButton(){
    if(this->workerThread.isRunning()){
	this->workerThread.wait();
    }else{
	this->workerThread.start();
    }
}

