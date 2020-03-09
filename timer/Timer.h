#include <iostream>
#include <chrono>
#include <ctime>
#include <cmath>
#include <thread>
#include <functional>
#include <atomic> 

       
class Timer {
   public:
    using fun = void (*)(int);
      void start(fun);
      void stop();
   private:
      std::atomic<bool> IsStart;

};