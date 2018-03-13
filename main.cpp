#include <iostream>
#include "Square.h"
#include "Rectangle.h"

using namespace std;
using namespace geometry;

int main()
{

    /*
    Square as;
    as.draw();
    Square bs(5, '#');
    bs.draw();
    */

    // constructor of root class is called first, all the way down to the current used class
    // destructor goes opposite way
    Rectangle ar;
    ar.draw();
    Rectangle br(4, 7, '*');
    br.draw();

    return 0;

}