#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include "Monster.h"
#include "Player.h"

player battle(player account);
player calcExp(player account, Monster mons);
player levelUp(player account);

int main()
{
	std::string name;
	std::string opt2;
	std::cout << "Welcome to your doom, please enter the name for your gravestone \n";
	std::cin >> name;
	std::string race[4] = { "Orc", "Human", "Elf", "Dwarf" };
	std::cout << "Pick your race, Orc, Human, Elvish or Dwarf - Type 1-4 to select your desired race \n";
	int raceOpt;
	std::cin >> raceOpt;
	raceOpt = raceOpt - 1;
	player account(name, race[raceOpt], 1, 0);
	std::cout << "\nWelcome to your funeral: " << account.getName() << " you are an " << account.getRace();
	std::cout << "\nDo you wish to see the general commands? y\n";
	std::cin >> opt2;

	if (opt2 == "y")
	{
		std::string back;
		std::cout << "1-4 are general commands for action \nAtt is for attack \nLook is to look around \nX object is to examine an item";
		std::cout << "\nType back to go back\n";
		std::cin >> back;
		if (back == "back")
		{
			opt2 = "n";
		}
		else
		{
			"\nType back";
		}
	}
	else
	{
		while (1)
		{
			Sleep(100);
			int opt1;
			std::cout << "\n Type 1 to move forward, 2 to move right, 3 to move left\n";
			std::cin >> opt1;
			if (opt1 >= 1 && opt1 <= 3)
			{
				Sleep(50 * (opt1));
				srand(time(NULL));
				if (opt1 >= 1 && opt1 <= 3)
				{
					account = battle(account);
				}
				else
				{
					std::cout << "\n Error please enter a number between 1 and 3 \n";
				}
			}
		}
		return 0;
	}
}
player battle(player account)
{
	std::string opt;
	std::string name[6] = { "Steve", "Carol", "Mark", "Max", "Bob", "Dylan" };
	std::string race[4][3] = { {"Rat", "Goblin", "Cow"},{"Snake", "Scorpion", "Troll"}, {"Orc", "Giant", "Dark Elf"}, {"Dragon", "Mad King", "Mom"} };
	Sleep(20);
	srand(time(NULL));
	int randM = (rand() % 3);
	int randT = (rand() % 4);
	int randN = rand() % 6;
	int killCount = 0;
	Monster mons(name[randN], account.getLevel(), race[randM][randT], randT);
	//std::string name, int lvl, std::string race, int tough)
	//Monster::Monster(std::string name, int lvl, std::string race, int tough)
	std::cout << "\nOut of the blue " + mons.getName() + " the " + mons.getRace() + " shows up to fight you, prepare to fight!\n";
	std::cout << mons.getHealth() << " " << mons.getToughness() << " " << mons.getMaxHealth();
	Sleep(200);
	do
	{
		std::cout << "\n\n################## *Insert Intense Music Here* ##################";
		std::cout << "\nIt is your turn to attack (hope you read the tutorial)\n";
		std::cin >> opt;
		if (opt == "att")
		{
			int att = rand() % (account.getDPS());
			int mobAtt = rand() % (mons.getDPS());
			mons.setHealth(mons.getHealth() - att);
			account.setHealth(account.getHealth() - mobAtt);
			std::cout << "\nYou hit the monster for " << att;
			std::cout << "\nThe monster now has " << mons.getHealth() << " hp left";
			Sleep(500);
			std::cout << "\nYou got hit for " << mobAtt;
			std::cout << "\nYou now have " << account.getHealth() << " hp left";
			Sleep(500);
		}
	} while (mons.getHealth() > 0 && account.getHealth() > 0);
	if (mons.getHealth() <= 0)
	{
		std::cout << "\n Wow look at you, you won a battle, aren't you a tough cookie anyways congrats";
		killCount = killCount + 1;;
		account = calcExp(account, mons);
		return account;
	}
	else
	{
		std::cout << "/n Well you died, saw that coming, but in the process you managed to kill: " + killCount;
	}
}
player calcExp(player acc, Monster mons)
{
	std::cout << "###\n Calculating Exp\n###";
	Sleep(500);
	acc.setExp(acc.getExp() + mons.getExp());
	std::cout << "EXP: " << acc.getExp() << "/" << acc.getExpReq();
	if (acc.getExp() >= acc.getExpReq())
	{
		levelUp(acc);
	}
	return acc;
}
player levelUp(player acc)
{
	acc.setLevel(acc.getLevel() + 1);
	acc.setExpReq();
	acc.setMaxHealth();
	acc.setHealth(acc.getMaxHealth());
	std::cout << "\n Wow, you managed to level up, look at you mr tough guy, you're now level: " << acc.getLevel();
	return acc;
}