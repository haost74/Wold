#include "reader.h"


std::string readFile(const std::string& fileName) {
        std::ifstream f(fileName);
        f.seekg(0, std::ios::end);
        auto size = f.tellg();
        std::string s(size, ' ');
        f.seekg(0);
        f.read(&s[0], size); // по стандарту можно в C++11, по факту работает и на старых компиляторах
        return s;
}
