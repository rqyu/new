#include <iostream>
#include "Derived.h"

using namespace std;

int main()
{

    /*
    Derived d1;
    Derived d2 = d1;
    Derived d3(10);
    */

    Derived d1;
    d1.setDataBase(100);
    Derived d2;
    d2 = d1;

    return 0;
}