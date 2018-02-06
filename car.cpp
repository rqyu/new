//
// Created by Ruiqi on 2018-02-06.
//

#include <iostream>
#include <cstring>
#include "car.h"

using namespace std;

namespace automotive {

    // if want to use default constructor, use below line
    // Car::Car() = default;
    Car::Car()
    {
        // this: pointer points to address of current object, default for all member functions
        cout << this << ": Car::Car()" << endl;
        m_seatCnt = 0;
        m_price = 0;
        m_manufacturer[0] = '\0';
    } // at end of the constructor, everything should be initialized

    // overload default constructor
    Car::Car(int seats, float price, const char *manu)
    {
        cout << this << ": Car::Car(...) " << seats << " " << price << " " << manu << endl;
        set(seats, price, manu);
    }

    // identify as a member function of Car
    // same as void display(const Car* this, [...])
    void Car::display() const {
        cout << "Manufacturer: ["
             << m_manufacturer << "]" << endl;
        cout << "Price: " << m_price << endl;
        cout << "Seats: " << m_seatCnt << endl;
    }

    void Car::set(int seats, float price, const char *manu) {
        m_seatCnt = seats;
        m_price = price;
        strcpy(m_manufacturer, manu);
    }

    // if want to use default destructor, use below line
    // Car::~Car() = default;
    Car::~Car() {
        // deallocate all dynamic memory for the class here.
        // no dynamic memory in Car, the char array is static allocated
        // put a message to identify;
        cout << this << ": Car::~Car()" << endl;
    }

}
