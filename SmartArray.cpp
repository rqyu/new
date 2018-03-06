//
// Created by Ruiqi on 2018-02-13.
//
#include <iostream>
#include "SmartArray.h"

using namespace std;

namespace collections
{

    SmartArray::SmartArray()
    {
        this->m_pData = nullptr;
        this->m_size = 0;
    }

    SmartArray::SmartArray(float item)
    {
        this->m_pData = new float[1];
        this->m_pData[0] = item;
        this->m_size = 1;
    }

    SmartArray::SmartArray(const SmartArray& source) {
        this->m_pData = nullptr;
        *this = source;
    }

    SmartArray& SmartArray::operator=(const SmartArray& source) {
        if (this != &source) {
            delete [] m_pData;
            m_size = source.m_size;
            m_pData = new float[m_size];
            for (int i = 0; i < m_size; i++) {
                m_pData[i] = source.m_pData[i];
            }
        }
        return *this;
    }

    SmartArray::~SmartArray()
    {
        cout << (void*)this << " is Clearning up: " << (void*)this->m_pData << endl;
        delete[] this->m_pData;
        cout << "Deleted: " << (void*)this->m_pData << endl;
    }

    ostream& operator<<(ostream& out, const SmartArray& arr)
    {
        for(int i = 0; i < arr.m_size - 1; i++) {
            out << arr.m_pData[i] << ", ";
        }
        out << arr.m_pData[arr.m_size - 1] << endl;
        return out;
    }

}