#include <iostream>

#include "GameObject.h"

void GameObject::Read()
{
	std::cout << "Enter type: (1=Wizard, 2=Rogue, 3=Ranger, 4=Paladin, 5=Bard): ";
	int typeResponse;
	std::cin >> typeResponse;
	type = static_cast<Type>(typeResponse - 1);

	std::cout << "Is the Game Object Static? (true/false): ";
	std::string response;
	std::cin >> response;
	response == "true" ? isStatic = true : isStatic = false;
}

void GameObject::Write()
{
	std::string staticStatus = isStatic ? "True" : "False";
	std::cout << TypeToString() << "\tMoving: " << staticStatus << std::endl;
}

GameObject::Type GameObject::GetType()
{
	return type;
}

bool GameObject::GetIsStatic()
{
	return isStatic;
}

std::string GameObject::TypeToString()
{
	switch (type)
	{
	case GameObject::Type::Wizard:
		return "Wizard";
	case GameObject::Type::Rogue:
		return "Rogue";
	case GameObject::Type::Ranger:
		return "Ranger";
	case GameObject::Type::Paladin:
		return "Paladin";
	case GameObject::Type::Bard:
		return "Bard";
	default:
		return "Unknown";
	}
}
