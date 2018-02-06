//
// Created by Ruiqi on 2018-02-06.
//

#ifndef AUTOMOTIVE_CAR_H
#define AUTOMOTIVE_CAR_H

namespace automotive {

    class Car
    {
        // number of seats in the car
        int m_seatCnt; // remember the m_ before var name, identify as private number
        // market value of the car
        float m_price;
        // who built this car
        char m_manufacturer[31]; //  '\0' is only for empty string, not any other types
    public:
        //Car();
        //Car(float, char[]);
        void display() const;
        void set(int seats, float price, const char* manu);
    };

}


#endif //AUTOMOTIVE_CAR_H
