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
        SmartArray(const SmartArray& source);
        ~SmartArray();
        SmartArray& operator=(const SmartArray& source);

        friend std::ostream& operator<<(std::ostream&, const SmartArray&);
    };



}

#endif //CLASSNOTES_SMARTARRAY_H
