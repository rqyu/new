#include <iostream>
#include "car.h"

using namespace std;
using namespace automotive;

int main()
{
    Car aCar, anotherCar;
    aCar.set(3, 3.4, "123");
    aCar.display();
    return 0;
}