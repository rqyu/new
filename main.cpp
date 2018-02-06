#include <iostream>
#include "car.h"

using namespace std;
using namespace automotive;

int main()
{
    Car aCar(5, 35856.43, "Seneca"), anotherCar;
    aCar.set(3, 3.4, "123");
    aCar.display();
    return 0;
    // destructor called here, LIFO
}