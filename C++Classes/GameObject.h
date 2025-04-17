#pragma once

#include <iostream>

class GameObject
{
public:
	enum class Type
	{
		Wizard,
		Rogue,
		Ranger,
		Paladin,
		Bard
	};

	virtual void Read();
	virtual void Write();

	virtual Type GetType() = 0;

	bool GetIsStatic();

private:
	Type type = Type::Wizard;
	bool isStatic;

	std::string TypeToString();
};
