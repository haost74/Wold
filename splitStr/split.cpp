#include "split.h"

std::vector<std::string> Split(std::string str){
    std::vector<std::string> res;
    std::istringstream f(str);
    std::string s{""};
    while (std::getline(f, s, '\n'))
    {
        res.push_back(s);
    }
    

    return res;
}