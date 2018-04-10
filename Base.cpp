//
// Created by Ruiqi on 2018-04-10.
//

#include <iostream>
#include "Base.h"

using namespace std;

Base::Base() {
    this->m_pDataBase = nullptr;
    clog << this << ": Base()" << endl;
}

Base::~Base() {
    delete this->m_pDataBase;
    clog << this << ": ~Base()" << endl;
}

Base::Base(const Base & other) {
    clog << this << ": Base(const Base&)" << endl;
    this->m_pDataBase = nullptr;
    this->m_pDataBase = new int;

    // refer to the same resource
    if (!other.isEmpty()) *(this->m_pDataBase) = *other.m_pDataBase;

    // copy pointer over
    // if pointer get deleted, both class will lose access
    // this->m_pDataBase = other.m_pDataBase;
}

Base& Base::operator=(const Base & other) {
    clog << this << ": Base& operator=(const Base&)" << endl;
    if (this != &other) {
        if (!other.isEmpty()) {
            this->m_pDataBase = new int;
            *(this->m_pDataBase) = *other.m_pDataBase;
        }
        // getter cannot return reference to resource
    }

    return *this;
}

void Base::setDataBase(int n) {
    if (isEmpty()) this->m_pDataBase = new int;
    *(this->m_pDataBase) = n;
}

bool Base::isEmpty() const {
    return nullptr == this->m_pDataBase;
}
