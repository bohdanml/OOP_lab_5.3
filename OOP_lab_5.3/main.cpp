#include <iostream>
#include <stdexcept>
#include "ClassA.h"
#include "ClassB.h"

int main() {
    try {
        B b;
        A* ptrA = &b;
        //A* ptrA = nullptr;
        B* ptrB = dynamic_cast<B*>(ptrA);

        if (ptrB == nullptr) {
            throw std::runtime_error("Dynamic failed: A* to B*");
        }
        ptrB->f();
        ptrB->bar();
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
