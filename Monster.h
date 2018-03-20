//
// Created by Ruiqi on 2018-03-20.
//

#ifndef MONSTER_H
#define MONSTER_H

#include <string>
#include "GameCharacter.h"

class Monster : public GameCharacter
{
    double m_rage;
public:
    double getRage() const { return this->m_rage; };
    Monster(std::string name, double rage);
    void move();
    virtual ~Monster();
};


#endif //MONSTER_H
