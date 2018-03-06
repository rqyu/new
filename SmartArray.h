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
        float* m_pData;
        int m_size;
    public:
        SmartArray();
        SmartArray(float);
        ~SmartArray();
    };

}

#endif //CLASSNOTES_SMARTARRAY_H
