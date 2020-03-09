#include "Timer.h"


     

void Timer::start(Timer::fun){
    
    fun(10);
    IsStart = true;
}

void Timer::stop(){
    IsStart = false;
}