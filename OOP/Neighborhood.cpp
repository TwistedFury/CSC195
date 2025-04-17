#include "Neighborhood.h"
#include "Student.h"
#include "Druggie.h"

Neighborhood::~Neighborhood()
{
	for (Human* human : m_humans)
	{
		delete human;
	}
	m_humans.clear(); // Size back to 0;
}

void Neighborhood::Add(Human::Type type)
{
	Human* toAdd = nullptr;
	switch (type)
	{
	case Human::Type::STUDENT:
		toAdd = new Student;
		break;
	case Human::Type::DRUGGIE:
		toAdd = new Druggie;
		break;
	default:
		break;
	}
	
	toAdd->Read();

	m_humans.push_back(toAdd);
}

void Neighborhood::DisplayAll()
{
	for (Human* human : m_humans)
	{
		human->Write();
	}
}

void Neighborhood::DisplayOfType(Human::Type type)
{

	for (Human* human : m_humans)
	{
		if (human->getType() == type) {
			human->Write();
		}
	}
}
