#include <iostream>
#include "SmartArray.h"

using namespace std;
using namespace collections;

void process(SmartArray someArray)
{
    cout << "Process: " << someArray;
    // building
    // SmartArray ar = someArray;
    // same as
    // SmartArray ar(someArray);
    // calls the copy constructor
}

SmartArray newProcess(SmartArray someArray) {
    cout << "copied the parameter: " << endl;
    SmartArray ar(someArray);
    cout << "created the new var: " << endl;
    return ar;
}

int main()
{

    SmartArray ar(12.32);
    //ar = SmartArray(10);
    // process(ar);
    SmartArray arr = newProcess(ar);
    cout << ar;



    return 0;

}