#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include <iostream>
#include <string>
#include "MagicalEntity.h"
#include "Warrior.h"
using namespace std;
//Spellblade class declaration
class Spellblade : public MagicalEntity, public Warrior {
    public:
        Spellblade(string name, int hp, int power, int armor, int manaPool, int spellPower);
        int calculateHybridDamage();
};
#endif