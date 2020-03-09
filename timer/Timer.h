#include <iostream>
#include <chrono>
#include <ctime>
#include <cmath>
#include <thread>
#include <functional>
#include <atomic> 

       
template <typename T>
class Timer {
   public:
   T node;
    Timer(T n);
      void (*fun)(int);
      void start();
      void stop();
      
   private:
      std::atomic<bool> IsStart;
      void loop();

};

//------------------ Timer.cpp ---------------
#pragma region 
template<typename T>
Timer<T>::Timer(T n){
    node = n;
}

template<typename T>
void Timer<T>::start(){
    if(fun == nullptr) return;
    
    IsStart = true;
    loop();
}

template<typename T>
void Timer<T>::stop(){
    IsStart = false;
}

template<typename T>
void Timer<T>::loop(){
    while (IsStart && fun != nullptr)
    {
       fun(10);
    }
    
}

#pragma endregion