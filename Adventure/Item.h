#pragma once
#include <string>
#include <vector>
class Item
{
public:
	Item(std::string, std::string, int);
	void setName();
	void setType();
	void setDps();
	void setInventory();

	std::string getName();
	std::string getType();
	int getDps();
	std::vector<Item> Inventory{};
private:
	int iDps;
	std::string iName;
	std::string iType;
};
