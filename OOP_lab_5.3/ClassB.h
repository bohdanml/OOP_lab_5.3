#pragma once
#include "ClassA.h"

class B : public A {
public:
    void f() const override;
    void bar() const;
};
