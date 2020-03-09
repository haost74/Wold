#include <iostream>
#include "reader/reader.h"
#include "splitStr/split.h"
#include "generate/Dna.h"
#include "timer/Timer.h"

static void foo(int i){
   std::cout << i << '\n';
}

int main(){
  
  //std::cout << readFile("data/state.txt") << '\n';
  auto str = readFile("data/state.txt");

  auto vec = Split(str);

  for(std::vector<std::string>::iterator it = vec.begin(); it != vec.end(); ++it) {
   std::cout << *it << '\n'; 
     }


     Dna d;
     d.generate(d.random());
     /*
     Timer t(10);
     t.fun = foo;
     t.start();
     */
    Timer<int> timer(10);
    timer.fun = foo;
    const int r = 1024;
    timer.start();

    

  return 0;
}
