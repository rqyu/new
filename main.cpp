#include <iostream>
#include "SmartArray.h"

using namespace std;
using namespace collections;

void process(SmartArray someArray)
{
    cout << "Process: " << someArray;
}

int main()
{

    SmartArray ar(12.32);

    process(ar);
    cout << "Garbage?: " << ar;


    process(ar);
    cout << "Garbage?: " << ar;

    return 0;

}