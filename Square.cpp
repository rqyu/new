//
// Created by Ruiqi on 2018-03-13.
//

#include <iostream>
#include "Square.h"

using namespace std;

namespace geometry {


    Square::~Square() {
        cout << "Remove Square" << endl;
    }

    void Square::draw() const {

        if (!isEmpty()) {
            for (int j = 0; j < m_length; ++j) {
                for (int i = 0; i < m_length; ++i) {
                    cout << (0 == j || m_length - 1 == j ? m_symbol : (0 == i || m_length - 1 == i ? m_symbol : ' '));
                }
                cout << endl;
            }
        } else
            cout << "No Square" << endl;

    }

    bool Square::isEmpty() const {
        // write literal first, then the variable
        // it is easier to debug in case of = instead of ==
        return 0 == m_length;
    }

    unsigned int Square::getLength() const {
        return m_length;
    }

    char Square::getSymbol() const {
        return m_symbol;
    }

}