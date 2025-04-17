#pragma once
#include "Human.h"
#include <vector>

class Neighborhood
{
public:
	~Neighborhood();

	void Add(Human::Type type);

	void DisplayAll();

	void DisplayOfType(Human::Type type);

private:
	std::vector<Human*> m_humans;
};
