#include <iostream>

#include "Player.h"
#include "Enemy.h"
#include "GameBoard.h"

using namespace std;

using MenuChoice = unsigned short;

int main()
{
    bool quit = false;

    GameBoard board;

    while (!quit)
    {
        cout << "1.) Create\n";
        cout << "2.) Display All\n";
        cout << "3.) Display By Type\n";
        cout << "4.) Display Enemies\n";
        cout << "5.) Display Players\n";
        cout << "0.) Quit\n";

        MenuChoice choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "1.) Player\n";
            cout << "2.) Enemy\n";

            cin >> choice;

            board.Create(choice);
            break;
        case 2:
            board.DisplayAll();
            break;
        case 3:
            cout << "1.) Wizards\n";
            cout << "2.) Rogues\n";
            cout << "3.) Rangers\n";
            cout << "4.) Paladins\n";
            cout << "5.) Bards\n";

            cin >> choice;

            board.Display(static_cast<GameObject::Type>(choice));
            break;
        case 4:
            break;
        case 5:
            break;
        case 0:
            quit = true;
            break;
        default:
            continue;
        }
    }
}
