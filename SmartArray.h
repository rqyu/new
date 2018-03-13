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

        //these 3 are mandatory if class contains a resource
        // rule of 3: if you need to copy, you need all 3
        SmartArray(const SmartArray& source);
        ~SmartArray();
        SmartArray& operator=(const SmartArray& source);

        // prevent copy
        // add this line, just to delete them:
        // SmartArray(const SmartArray& source) = delete;
        // SmartArray& operator=(const SmartArray& source) = delete;

        friend std::ostream& operator<<(std::ostream&, const SmartArray&);
    };



}

#endif //CLASSNOTES_SMARTARRAY_H
