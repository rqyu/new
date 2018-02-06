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
        // constructor, the default constructor, always have the same name as the class itself
        Car();
        // the default constructor will be added if no constructor is declared
        // if a non-default constructor is declared, the default constructor will not be added automatically
        Car(int, float, const char*);
        // destructor, the default destructor, always have the same name as the class itself with ~
        // used to deallocate dynamic memory if any is used
        // CANNOT be overloaded
        ~Car();
        void display() const;
        void set(int seats, float price, const char* manu);
    };

}


#endif //AUTOMOTIVE_CAR_H
