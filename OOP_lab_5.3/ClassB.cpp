#include "ClassB.h"
#include <iostream>

void B::f() const {
    std::cout << "B::f()" << std::endl;
}

void B::bar() const {
    std::cout << "B::bar()" << std::endl;
}
