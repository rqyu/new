//
// Created by Ruiqi on 2018-03-13.
//

#ifndef GEOMETRY_SQUARE_H
#define GEOMETRY_SQUARE_H

#include <iostream>

namespace geometry {

    class Square {
        unsigned int m_length;
        // symbol used for drawing the square
        char m_symbol;
    public:
        // initialization list : set default values
        // use initialization list to initialize "const" properties
        // no garbage for assigned members
        Square() : m_length(0), m_symbol('-') {
            std::cout << "New Square" << std::endl;
        };
        Square(unsigned int len, char sym) : m_length(len), m_symbol(sym) {
            std::cout << "New Square with param" << std::endl;
        };
        ~Square();
        void draw() const;

    protected:
        bool isEmpty() const;
        unsigned int getLength() const;
        char getSymbol() const;
    };

}


#endif //GEOMETRY_SQUARE_H
