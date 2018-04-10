//
// Created by Ruiqi on 2018-04-10.
//

#include <iostream>
#include "Derived.h"

using namespace std;

// all constructors in hierarchy calls the default base constructor unless otherwise identified

Derived::Derived() {
    clog << this << ": Derived()" << endl;
}

Derived::~Derived() {
    clog << this << ": ~Derived()" << endl;
}

Derived::Derived(const Derived & other) : Base(other) {
    clog << this << ": Derived(const Derived&)" << endl;
}

Derived::Derived(int n) {
    clog << this << ": Derived(int)" << endl;
    Base::setDataBase(n);
}

Derived &Derived::operator=(const Derived& other) {
    clog << this << ": Derived& operator=(const Derived&)" << endl;

    // any of these 3 will work
    // start with casting the LHS of the operator

    // C-style cast, does not do type checking
    (Base&)*this = other;

    // safer because does type checking
    dynamic_cast<Base&>(*this) = other;

    Base::operator=(other);

    return *this;
}

