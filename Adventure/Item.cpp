#include "Item.h"

Item::Item(std::string name, std::string type, int dps)
{
	setName();
	setType();
	setDps();
	setInventory();
}

void Item::setName()
{
	std::string name[8] = { "Slayer", "Red", "Bae", "Swag", "Destroyer", "Destroyer of Worlds", "Weak", "Best" };
	int i = rand() % 8;
	iName = name[i];
}
void Item::setType()
{
	std::string type[8] = { "Stick", "Axe", "Knife", "Sword", "Great Sword", "Battle Axe", "Spear", "Halbeard" };
	int i = rand() % 8;
	iType = type[i];
}
void Item::setDps()
{
	int d = rand() % 8;
	iDps = d;
}
void Item::setInventory()
{
	Item newItem({ iName, iType, iDps });
	Inventory.push_back(newItem);
}

std::string Item::getName()
{
	return iName;
}

std::string Item::getType()
{
	return iType;
}

int Item::getDps()
{
	return iDps;
}