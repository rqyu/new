#include <iostream>
#include "Monster.h"
#include "Vampire.h"

using namespace std;

int main()
{

    /*
    GameCharacter aChar;
    aChar.move();

    Monster aMon("Kevin", .2);
    aMon.move();

    Vampire aVam;
    aVam.move();
    */

    // before continue, notice GameCharacter is now an abstract class, cannot be initialized
    GameCharacter* aChar = nullptr;
    char cType = '\0';

    cout << "What character would you like[g, m, v]? " << endl;
    cin >> cType;

    switch(cType)
    {
        /* GameCharacter became an abstract class, cannot be initialized
        case 'g':
            aChar = new GameCharacter("Tom");
            break;
        */
        case 'm':
            aChar = new Monster("Ed", 0.9);
            break;
        default:
            aChar = new Vampire();
    }

    aChar->move();

    delete aChar;
    /*
     * \33[im ... \33[0m
     *
     * case i:
     *
     * 1: bold
     * 4: underline
     * 7: background grey
     * 30-37: colors
     * 40-47: background in colors
     * 90-97: light colors
     * 100-107: background in light colors
     * */
    /*
    for (int i = 1; i <= 110; i++) {
        cout << "\33[" << i << "m" << i << "\33[0m";
    }
    cout << endl;
    */
    return 0;

}