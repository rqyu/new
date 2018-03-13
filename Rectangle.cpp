//
// Created by Ruiqi on 2018-03-13.
//

#include <iostream>
#include "Rectangle.h"

using namespace std;

namespace geometry
{

    Rectangle::Rectangle() : Square(7, '&'), m_width(3) {
        cout << "New Rectangle with default values 7, &" << endl;
    }

    Rectangle::~Rectangle() {
        cout << "Removing Rectangle" << endl;
    }

    void Rectangle::draw() const {
        if (!isEmpty()) {
            for (int j = 0; j < getLength(); ++j) {
                for (int i = 0; i < m_width; ++i) {
                    cout << (0 == j || getLength() - 1 == j ? getSymbol() : (0 == i || m_width - 1 == i ? getSymbol() : ' '));
                }
                cout << endl;
            }
        } else
            cout << "No Rectangle" << endl;
    }
}