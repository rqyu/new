//
// Created by Ruiqi on 2018-04-10.
//

#ifndef CLASSNOTES_DERIVED_H
#define CLASSNOTES_DERIVED_H

#include "Base.h"

class Derived : public Base {
public:
    Derived();
    Derived(int);
    ~Derived();
    Derived(const Derived&);
    Derived& operator=(const Derived&);
};


#endif //CLASSNOTES_DERIVED_H
