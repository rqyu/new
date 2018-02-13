//
// Created by Ruiqi on 2018-02-13.
//

#ifndef COLLECTIONS_SMARTARRAY_H
#define COLLECTIONS_SMARTARRAY_H

#include <iostream>

// NO using namespace in header

namespace collections {

    class SmartArray
    {
        long* m_pData;
        int m_size;
    public:
        SmartArray();
        SmartArray(long item);
        ~SmartArray();
        void add(long item);
        void display() const;
        void display(std::ostream& out) const;
        // overload operators
        void operator+=(long item);

        operator bool() const;
    };

    // free helpers
    // no const at the end of non member functions
    std::ostream& operator<<(std::ostream& out, const SmartArray& arr);
    // friend functions / friend classes

}

#endif //CLASSNOTES_SMARTARRAY_H
