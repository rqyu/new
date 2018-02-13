//
// Created by Ruiqi on 2018-02-13.
//
#include <iostream>
#include "SmartArray.h"

using namespace std;

namespace collections
{

    SmartArray::SmartArray() {
        cout << "SmartArray::SmartArray()" << endl;
        this->m_pData = nullptr;
        this->m_size = 0;
    }

    SmartArray::SmartArray(long item) {
        cout << "SmartArray::SmartArray()" << endl;
        this->m_pData = nullptr;
        this->m_size = 0;
        // since += is already overloaded, so increment to m_pData and m_size are taken care of
        *this += item;
    }

    SmartArray::~SmartArray() {
        cout << "SmartArray::~SmartArray()" << endl;
        delete[] this->m_pData;
    }

    void SmartArray::add(long item) {
        long* tmp = new long[this->m_size + 1];
        for (int i = 0; i < m_size; ++i) {
            tmp[i] = m_pData[i];
        }

        delete[] m_pData;
        this->m_pData = tmp;

        this->m_pData[m_size] = item;
        ++m_size;
    }

    void SmartArray::display() const
    {
        for (int i = 0; i < m_size; ++i)
            cout << this->m_pData[i] << ", ";
        cout << endl;
    }

    // overload the display function using ostream
    void SmartArray::display(std::ostream &out) const {
        for (int i = 0; i < m_size; ++i)
            out << this->m_pData[i] << ", ";
        out << endl;
    }

    void SmartArray::operator+=(long item) {
        this->add(item);
    }

    SmartArray::operator bool() const {
        return this->m_size > 0;
    }

    ostream &operator<<(ostream &out, const SmartArray &arr) {
        arr.display(out);
        return out;
    }
}