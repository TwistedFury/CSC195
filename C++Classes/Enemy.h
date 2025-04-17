#pragma once
#include "GameObject.h"

using AC = unsigned short;
using Health = unsigned short;

class Enemy : public GameObject
{
public:

	void Read() override;
	void Write() override;

	Type GetType() override;

	AC GetArmorClass();
	Health GetHealth();

private:
	AC armorClass;
	Health health;
};
