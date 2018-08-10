#include "Monster.h"
Monster::Monster(std::string name, int lvl, std::string race, int tough)
{
	setName(name);
	setLevel(lvl);
	setRace(race);
	setToughness(tough);
	setDPS();
	setMaxHealth();
	setHealth(mMH);
	setExp();
}
void Monster::setName(std::string name)
{
	mName = name;
}
void Monster::setLevel(int lvl)
{
	mLvl = lvl;
}
void Monster::setRace(std::string race)
{
	mRace = race;
}
void Monster::setToughness(int tough)
{
	mTough = tough;
}
void Monster::setDPS()
{
	mDPS = (2 * (getLevel()) + ((getToughness()*getLevel()) / 2));
}
void Monster::setHealth(double health)
{
	mMH = health;
}
void Monster::setMaxHealth()
{
	mMH = (4 * (getToughness() + getLevel()));
}
void Monster::setExp()
{
	Exp = (getLevel() * 5);
}
std::string Monster::getName()
{
	return mName;
}
int Monster::getLevel()
{
	return mLvl;
}
std::string Monster::getRace()
{
	return mRace;
}
int Monster::getToughness()
{
	return mTough;
}
int Monster::getDPS()
{
	return mDPS;
}
double Monster::getHealth()
{
	return mH;
}
double Monster::getMaxHealth()
{
	return mMH;
}
int Monster::getExp()
{
	return Exp;
}