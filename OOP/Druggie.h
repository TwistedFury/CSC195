#pragma once

#include <iostream>

#include "Human.h"

using enemies_t = unsigned char;

class Druggie : public Human
{
public:
	Druggie()
	{
		std::cout << "druggie constructor\n";
	}

	Druggie(std::string name, age_t age, bool isPoor, bool isJailed, enemies_t numEnemies) :
		Human{ name, age },
		isPoor{ isPoor },
		isJailed{ isJailed },
		numEnemies{ numEnemies }
	{
		std::cout << "druggie constructor\n";
	}

private:
	bool isPoor = true;
	bool isJailed = true;
	enemies_t numEnemies = 0;
};
