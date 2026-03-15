#include "Knight.h"
//Knight class definition and implementation
Knight :: Knight(string name, int hp, int power, int armor, int charge) : Warrior(name, hp, power, armor)
{
    chargeBonus = charge;
    cout << "Constructor[Knight]" << endl;
}

int Knight :: getChargeBonus()
{
    return chargeBonus;
}

int Knight :: calculateBurstDamage()
{
    return getPower() + chargeBonus;
}