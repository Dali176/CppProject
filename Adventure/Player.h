#pragma once
#include <string>
class player
{
	// The player class and its defination
	// Made int Exp a capital E to help me in future in the cpp file, it came in handy
public:
	player(std::string, std::string, int, int);
	void setName(std::string);
	void setRace(std::string);
	void setLevel(int);
	void setExp(double);
	void setExpReq();
	void setHealth(double);
	void setMaxHealth();
	void setDPS();
	std::string getName();
	std::string getRace();
	int getLevel();
	double getHealth();
	double getMaxHealth();
	int getDPS();
	int getExp();
	int getExpReq();
private:
	std::string pName;
	std::string pRace;
	int pLvl;
	double pH;
	double pMH;
	int pDPS;
	int Exp;
	int ExpReq;
};