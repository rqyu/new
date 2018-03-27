#include <iostream>
#include "Vampire.h"

using namespace std;

template <class T>
class Foo
{
    T m_data;
public:
    Foo(T a) : m_data(a) {};
    bool operator>(const Foo& other) const { return this->m_data > other.m_data; };
    friend ostream& operator<<(ostream& os, const Foo& f) { os << f.m_data; return os; };
};


// templates are not to be implemented in .cpp file because it will become inaccessible
// when the template function is called, the function definition will be generated at runtime
// templates always should go in headers
template <typename T>
T max(const T *arr, int size) {
    T m = arr[0];
    for (int i = 1; i < size; i++) {
        m = (m > arr[i] ? m : arr[i]);
    }
    return m;
}

int main()
{

    // related type are on the same hierarchy tree
    // parametric polymorphism uses template, reuse same logic for different types of inputs

    // static vs dynamic allocated: known size vs unknown size
    int arrInt[] = { 12, 76, 7, -86, -4 };
    char arrCh[] = {'A', 'a', 'C', 'E', '9'};

    cout << max<int>(arrInt, 5) << endl;
    cout << max<char>(arrCh, 5) << endl;

    /*
    cout << min(arrInt, 5) << endl;
    cout << min(arrChar, 5) << endl;
    */

    Foo<double> arrFo[] = {Foo<double>(4), Foo<double>(-3.2), Foo<double>(3.3), Foo<double>(122.2)};

    cout << max<Foo<double>>(arrFo, 4) << endl;


    // static_cast will take var as param and convert to template param
    // static cast convert unrelated but compitable types
    // most used
    cout << static_cast<double>(arrInt[0]) << endl;

    // remove const status of var
    char* s = const_cast<char*>("Array");
    cout << s << endl;

    // be aware of type
    Foo<int>* af = reinterpret_cast<Foo<int>*>(arrInt);
    cout << af[3] << endl;

    // second most used
    // works only on hierarchy
    // no output on fail, need explicit check
    Vampire* vam;
    dynamic_cast<Monster*>(vam);
    GameCharacter* gc;
    dynamic_cast<Monster*>(gc);
    return 0;

}