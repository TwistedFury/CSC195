#include "Druggie.h"

void Druggie::Read()
{
	Human::Read();
	std::cout << "Number of Enemies: ";
	std::cin >> numEnemies;

	std::cout << "\nIs is jail? (true/false): ";
	std::cin >> isJailed;
}

void Druggie::Write()
{
	Human::Write();
	std::cout << "\nIs Jailed?: " << isJailed << "\nNumber of Enemies: " << numEnemies << endl;
}
