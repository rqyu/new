#include <iostream>
#include "car.h"
#include "SmartArray.h"

using namespace std;
using namespace automotive;
using namespace collections;

int main()
{

    int week = 5;

    if (week == 4) {
        Car aCar(5, 35856.43, "Seneca"), anotherCar;
        aCar.set(3, 3.4, "123");
        aCar.display();
    }

    if (week == 5) {
        SmartArray anArray;
        // constructor overload
        SmartArray anotherArray = 100;
        if (anArray)
            anArray.display(cout);
        anArray.add(10);
        anArray.add(20);
        anArray.add(12);
        anArray += 30;
        cout << anArray << endl;
    }

    return 0;
    // destructor called here, LIFO
}