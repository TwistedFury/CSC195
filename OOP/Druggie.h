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
	
	void setNumEnemy(enemies_t enemies) 
	{ 
		if (numEnemies < 0 || numEnemies > 100) return;
		numEnemies = enemies;
	}
	enemies_t getNumEnemy() { return numEnemies; }

	void setIsPoor(bool isPoor) { this->isPoor = isPoor; }
	bool getIsPoor() { return isPoor; }

	void setIsJailed(bool isJailed) { this->isJailed = isJailed; }
	bool getIsJailed() { return isJailed; }

	Type getType() override { return Type::DRUGGIE; }

	void Read() override;
	void Write() override;

private:
	bool isPoor = true;
	bool isJailed = true;
	enemies_t numEnemies = 0;
};
