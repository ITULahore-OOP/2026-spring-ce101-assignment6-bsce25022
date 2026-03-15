#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
#include <iostream>
#include <string>
using namespace std;
//MagicalEntity class declaration
class MagicalEntity {
    int manaPool;
    int spellPower;

    public:
        MagicalEntity(int manaPool, int spellPower);
        int getMana() const;
        int getSpellPower() const;
};
#endif