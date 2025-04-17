#pragma once
#include <iostream>

#include "GameObject.h"

using Level = unsigned short;

class Player : public GameObject
{
public:

	void Read() override;
	void Write() override;

	Type GetType() override;

	Level GetLevel();

private:
	Level level;
	bool isAlive = true;
};