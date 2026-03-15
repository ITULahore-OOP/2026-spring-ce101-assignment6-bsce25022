#include "Spellblade.h"
//Spellblade class definition and implementation
Spellblade :: Spellblade(string name, int hp, int power, int armor, int manaPool, int spellPower) : MagicalEntity(manaPool, spellPower), Warrior(name, hp, power, armor)
{
    cout << "Constructor[Spellblade]" << endl;
}

int Spellblade :: calculateHybridDamage()
{
    return getPower() + getSpellPower();
}