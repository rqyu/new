//
// Created by Ruiqi on 2018-03-20.
//
#include <iostream>
#include "Vampire.h"

using namespace std;

Vampire::Vampire() : Monster("Steve", 0.6) {
    clog << "    \33[95m" << this << "\33[0m: Vampire::Vampire" << endl;
}

Vampire::~Vampire() {
    clog << "    \33[95m" << this << "\33[0m: Vampire::~Vampire" << endl;
}

void Vampire::move() {
    clog << "    \33[95m" << this << "\33[0m: Vampire::move()" << endl;
    cout << this->getName() << " flies in a cool way." << endl;
}
