#pragma once
#include <string>
class Item
{
public:
	Item(std::string, std::string, int);
	void setName();
	void setType();
	void setDps();

	std::string getName();
	std::string getType();
	int getDps();
private:
	int iDps;
	std::string iName;
	std::string iType;
};
