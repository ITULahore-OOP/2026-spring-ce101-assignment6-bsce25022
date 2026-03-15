#ifndef GUILD_H
#define GUILD_H
#include <iostream>
#include <string>
#include "Hero.h"
using namespace std;
//Guild class declaration
class Guild {
    string guildName;
    Hero* roster[15];
    int memberCount;

    public:
        Guild(string name);
        ~Guild();
        int getMemberCount() const { return memberCount; }
        int calculateTotalGuildPower();
        void displayGuildStats();
        void operator+=(Hero* newHero);
        friend ostream& operator<<(ostream& os, Guild& guild);
};
#endif