#include "Warrior.h"
//Warrior class definition and implementation
Warrior :: Warrior(string name, int hp, int power, int armor) : Hero(name, hp, power)
{
    armorRating = armor;
    cout << "Constructor[Warrior]" << endl;
}

int Warrior :: getArmor()
{
    return armorRating;
}

int Warrior :: calculateEffectiveHealth()
{
    return getHealth() + armorRating * 2;
}