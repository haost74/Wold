#include <iostream>
#include "reader/reader.h"
#include "splitStr/split.h"


int main(){
  
  //std::cout << readFile("data/state.txt") << '\n';
  auto str = readFile("data/state.txt");

  auto vec = Split(str);

  for(std::vector<std::string>::iterator it = vec.begin(); it != vec.end(); ++it) {
   std::cout << *it << '\n'; 
     }
  

  return 0;
}
