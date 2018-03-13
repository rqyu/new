//
// Created by Ruiqi on 2018-03-13.
//

#ifndef GEOMETRY_RECTANGLE_H
#define GEOMETRY_RECTANGLE_H

#include "Square.h"

namespace geometry {
    // private by default
    // class Rectangle : Square
    class Rectangle : protected Square {
        unsigned int m_width;
    public:
        Rectangle();
        Rectangle(unsigned int len, unsigned int wid, char sym) : Square(len, sym), m_width(wid) { };
        ~Rectangle();
        void draw() const;
    };
}


#endif //GEOMETRY_SQUARE_H
