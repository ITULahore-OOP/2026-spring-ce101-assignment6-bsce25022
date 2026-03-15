#include "Guild.h"
//Guild class definition and implementation
Guild :: Guild(string name)
{
    guildName = name;
    memberCount = 0;
    for (int i = 0; i < 15; i++)
    {
        roster[i] = nullptr;
    }
}

Guild :: ~Guild()
{
    for (int i = 0; i < memberCount; i++)
    {
        delete roster[i];
        roster[i] = nullptr;
    }
    cout << "The guild " << guildName << " has been disbanded!\n";
}

int Guild :: calculateTotalGuildPower()
{
    int totalPower = 0;
    for(int i = 0; i < memberCount; i++)
    {
        totalPower += roster[i]->getPower();
    }
    return totalPower;
}

void Guild :: displayGuildStats()
{
    cout << "Guild Name: " << guildName << "\n";
    cout << "Total Members: " << memberCount << "/15\n";
    cout << "Total Guild Power: " << calculateTotalGuildPower() << "\n";
}

void Guild :: operator+=(Hero* newHero)
{
    if (memberCount < 15)
    {
        roster[memberCount++] = new Hero(*newHero);
    }
    else
    {
        cout << "Guild is at full capacity!" << endl;
    }
}

ostream& operator<<(ostream& os, Guild& guild)
{
    os << "Guild: " << guild.guildName << "\n";
    os << "Members: " << guild.memberCount << "\n";
    for (int i = 0; i < guild.memberCount; i++)
    {
        os << "- " << guild.roster[i]->getName()
        << " (Power: " << guild.roster[i]->getPower() << ")\n";
    }
    return os;
}