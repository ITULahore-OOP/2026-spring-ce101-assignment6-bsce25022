#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include <string>
#include "Hero.h"
using namespace std;
//Warrior class declaration
class Warrior : public Hero {
    int armorRating;

    public:
        Warrior(string name, int hp, int power, int armor);
        int getArmor();
        int calculateEffectiveHealth();
};
#endif