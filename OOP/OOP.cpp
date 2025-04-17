#include <iostream>
#include <vector>

// #include "Human.h" ( because "Student.h" already includes "Human.h" )
#include "Student.h"
#include "Druggie.h"
#include "Neighborhood.h"

using namespace std;

int main()
{
	Neighborhood neighborhood;

	bool quit = false;

	while (!quit)
	{
		// DISPLAY MENU

		cout << "1.) Add Human\n";
		cout << "2.) Display All Humans\n";
		cout << "3.) Display Human(s) of Type\n";
		cout << "0.) Exit\n";

		unsigned short selection;
		cin >> selection;

		switch (selection)
		{
		case 1:
			cout << "1.) Student";
			cout << "2.) Druggie";
			
			unsigned short type;
			cin >> type;

			neighborhood.Add(static_cast<Human::Type>(type - 1));
			break;
		case 2:
			break;
			neighborhood.DisplayAll();
		case 3:
			break;
		case 0:
			quit = true;
			break;
		default: // ask again
			continue;
		}

		neighborhood.Add(Human::Type::STUDENT);
		neighborhood.DisplayAll();

	}

}
