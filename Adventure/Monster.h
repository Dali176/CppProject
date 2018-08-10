#pragma once
#include <string>
class Monster
{
public:
	Monster(std::string, int, std::string, int);
	void setName(std::string);
	void setLevel(int);
	void setRace(std::string);
	void setDPS();
	void setHealth(double);
	void setMaxHealth();
	void setToughness(int);
	std::string getName();
	int getLevel();
	std::string getRace();
	int getDPS();
	double getHealth();
	double getMaxHealth();
	int getToughness();
	int getExp();
	void setExp();
protected:
	std::string mName;
	std::string mRace;
	int mLvl;
	int mDPS;
	double mH;
	double mMH;
	int mTough;
	int Exp;
};