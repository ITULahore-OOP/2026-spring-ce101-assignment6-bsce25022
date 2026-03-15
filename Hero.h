#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <string>
using namespace std;
//Hero class declaration
class Hero {
    string heroName;
    int health;
    int basePower;

    public:
        Hero(string name, int hp, int power);
        ~Hero();
        string getName()const;
        int getHealth()const;
        int getPower()const;
        void takeDamage(int damage);
        bool operator>(const Hero& other)const;
        int operator+(const Hero& other)const;
};
#endif