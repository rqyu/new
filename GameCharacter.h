//
// Created by Ruiqi on 2018-03-20.
//

#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H

#include <string>

class GameCharacter {
    // string class, need to include <string> header
    std::string m_name;
public:
    std::string getName() const { return m_name; };
    virtual void move() = 0;
    GameCharacter();
    GameCharacter(std::string name);
    virtual ~GameCharacter();
};


#endif //GAMECHARACTER_H
