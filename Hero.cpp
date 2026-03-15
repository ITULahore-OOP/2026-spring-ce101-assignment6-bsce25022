#include "Hero.h"
//Hero class definition and implementation
Hero :: Hero(string name, int hp, int power)
{
    heroName = name;
    health = hp;
    basePower = power;
    cout << "Contructor[Hero]" << endl;
}  

Hero :: ~Hero()
{
    cout << "Destructor[Hero]" << endl;
}

string Hero :: getName() const
{
    return heroName;
}

int Hero :: getHealth() const
{
    return health;
}

int Hero :: getPower() const 
{
    return basePower;
}

void Hero :: takeDamage(int damage)
{
    if(damage < health)
    {
        health -= damage;
    }
    else
    {
        health = 0;
    }
}

bool Hero :: operator>(const Hero& other) const
{
    if(this->basePower > other.basePower)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Hero :: operator+(const Hero& other) const
{
    return this->health + other.health;
}