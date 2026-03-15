#ifndef KNIGHT_H
#define KNIGHT_H
#include <iostream>
#include <string>
#include "Warrior.h"
using namespace std;
//Knight class declaration
class Knight : public Warrior {
    int chargeBonus;

    public:
        Knight(string name, int hp, int power, int armor, int charge);
        int getChargeBonus();
        int calculateBurstDamage();
};
#endif