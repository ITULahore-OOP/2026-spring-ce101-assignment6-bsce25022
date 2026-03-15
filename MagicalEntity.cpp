#include "MagicalEntity.h"
//MagicalEntity class definition and implementation
MagicalEntity :: MagicalEntity(int manaPool, int spellPower)
{
    this->manaPool = manaPool;
    this->spellPower = spellPower;
    cout << "Constructor[MagicalEntity]" << endl;
}

int MagicalEntity :: getMana() const
{
    return manaPool;
}

int MagicalEntity :: getSpellPower() const
{
    return spellPower;
}