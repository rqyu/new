//
// Created by Ruiqi on 2018-04-10.
//

#ifndef CLASSNOTES_BASE_H
#define CLASSNOTES_BASE_H


class Base {
    int* m_pDataBase;
public:
    Base();
    virtual ~Base();
    Base(const Base&);
    Base& operator=(const Base&);

    bool isEmpty() const;

    void setDataBase(int);
};


#endif //CLASSNOTES_BASE_H
