//
// Created by Ruiqi on 2018-03-20.
//

#include <iostream>
#include <string>
#include "Monster.h"

using namespace std;

// constructor of base class has to be used using initialization list
Monster::Monster(string name, double rage) : GameCharacter(name), m_rage(rage)
{
    clog << "    \33[95m" << this << "\33[0m: Monster::Monster(string, double)" << endl;
}

void Monster::move() {
    clog << "    \33[95m" << this << "\33[0m: Monster::move" << endl;
    cout << this->getName() << " moves in a boring way." << endl;
}

Monster::~Monster() {
    clog << "    \33[93m" << this << "\33[0m: Monster::~Monster(string, double)" << endl;
}
