//
// Created by Ruiqi on 2018-03-20.
//
#include <iostream>
#include "GameCharacter.h"

using namespace std;

GameCharacter::GameCharacter() {
    // cerr: capture information when things go wrong
    // cerr is not buffered, error message is displayed on screen immediately once its produced.

    // clog: show detail when program runs
    // clog is buffered, display is delayed until buffer is full, then flush to display everything.
    // not writing stuff immediately

    // cout is also buffered.
    clog << "    " << this << ": GameCharacter::GameCharacter()" << endl;
    this->m_name = "John";
}

GameCharacter::~GameCharacter() {
    clog << "    " << this << ": GameCharacter::~GameCharacter()" << endl;
}

GameCharacter::GameCharacter(string name) {
    clog << "    " << this << ": GameCharacter::GameCharacter(string)" << endl;
    this->m_name = name;
}
