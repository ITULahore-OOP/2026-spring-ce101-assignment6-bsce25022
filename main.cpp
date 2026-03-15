#include "Guild.h"
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "Spellblade.h"
//Main function definition and implementation
int main() {

    string guildName;
    cout << "Enter the name of your guild: ";
    getline(cin, guildName);
    Guild myGuild(guildName);
    int choice; // Menu choice variable
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Add a Hero to the Guild\n";
        cout << "2. Display Guild Stats\n";
        cout << "3. Display Guild Roster\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 

        if (choice == 1)
        {
            int choice2; // Hero type choice variable
            cout << "Select Hero Type:\n";
            cout << "1. Warrior\n";
            cout << "2. Knight\n";
            cout << "3. Spellblade\n";
            cout << "Enter your choice: ";
            cin >> choice2;
            if(choice2 == 1)
            {
                string name;
                int hp, power, armor;
                cout << "Enter Hero Name: ";
                cin >> name;
                cout << "Enter Health Points: ";
                cin >> hp;
                cout << "Enter Base Power: ";
                cin >> power;
                cout << "Enter Armor: ";
                cin >> armor;
                Warrior* newWarrior = new Warrior(name, hp, power, armor);
                myGuild += newWarrior;
                delete newWarrior; 
                cout << "Warrior added to the guild!\n";
            }
            else if(choice2 == 2)
            {
                string name;
                int hp, power, armor, charge;
                cout << "Enter Hero Name: ";
                cin >> name;
                cout << "Enter Health Points: ";
                cin >> hp;
                cout << "Enter Base Power: ";
                cin >> power;
                cout << "Enter Armor: ";
                cin >> armor;
                cout << "Enter Charge Bonus: ";
                cin >> charge;
                Knight* newKnight = new Knight(name, hp, power, armor, charge);
                myGuild += newKnight;
                delete newKnight; 
                cout << "Knight added to the guild!\n";
            }
            else if(choice2 == 3)
            {
                string name;
                int hp, power, armor, manaPool, spellPower;
                cout << "Enter Hero Name: ";
                cin >> name;
                cout << "Enter Health Points: ";
                cin >> hp;
                cout << "Enter Base Power: ";
                cin >> power;
                cout << "Enter Armor: ";
                cin >> armor;
                cout << "Enter Mana Pool: ";
                cin >> manaPool;
                cout << "Enter Spell Power: ";
                cin >> spellPower;
                Spellblade* newSpellblade = new Spellblade(name, hp, power, armor, manaPool, spellPower);
                myGuild += newSpellblade; //operator overloading to add hero to guild
                delete newSpellblade; 
                cout << "Spellblade added to the guild!\n";
            }
            else
            {
                cout << "Invalid hero type choice.\n";
            }
        }
        else if (choice == 2)
        {
            myGuild.displayGuildStats();
        }
        else if (choice == 3)
        {
            cout << myGuild; //operator overloading to display guild roster
        }
        else if (choice != 0)
        {
            cout << "Invalid choice. Please try again.\n"; //Input validation for menu choice
        }
    } 
    while(choice != 0); //Loop until user chooses to exit
    cout << "Exiting the program. Goodbye!\n";
    return 0;
}