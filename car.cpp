//
// Created by Ruiqi on 2018-02-06.
//

#include <iostream>
#include <cstring>
#include "car.h"

using namespace std;

namespace automotive {

    // identify as a member function of Car
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

}
