#include "Player.h"

player::player(std::string name, std::string race, int level, int exp)
{
	setName(name);
	setRace(race);
	setLevel(level);
	setExp(exp);
	setMaxHealth();
	setHealth(pMH);
	setDPS();
	setExpReq();
}
void player::setName(std::string name)
{
	pName = name;
}
void player::setRace(std::string race)
{
	pRace = race;
}
void player::setLevel(int lvl)
{
	lvl = 1;
	pLvl = lvl;
}
void player::setHealth(double h) 
{
	pH = h;
}
void player::setMaxHealth()
{
	pMH = (10 * getLevel());
}
void player::setDPS()
{
	pDPS = (2 * getLevel());
}
void player::setExp(double exp)
{
	exp = 0.0;
	Exp = exp;
}
void player::setExpReq()
{
	ExpReq = 50 + ((getLevel()*getLevel()) * 10);
}
std::string player::getName()
{
	return pName;
}
std::string player::getRace()
{
	return pRace;
}
int player::getLevel()
{
	return pLvl;
}
double player::getHealth()
{
	return pH;
}
double player::getMaxHealth()
{
	return pMH;
}
int player::getDPS()
{
	return pDPS;
}
int player::getExp()
{
	return Exp;
}
int player::getExpReq()
{
	return ExpReq;
}
