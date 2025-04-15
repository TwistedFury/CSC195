#include <iostream>
#include <vector>

// #include "Human.h" ( because "Student.h" already includes "Human.h" )
#include "Student.h"
#include "Druggie.h"

using namespace std;

int main()
{

    cout << sizeof(Human) << endl; // 48 bytes

    //Student student1("Raymond", 48, 3.4f);

    vector<Human*> neighborhood; // I didn't do Teacher, so this makes sense
    neighborhood.push_back(new Student{ "Noel", 19, 4.0f });
    neighborhood.push_back(new Druggie{ "Lance", 19, true, false, 5 });

    for (int i = 0; i < neighborhood.size(); i++)
    {
        if (neighborhood[i]->getType() == Human::Type::STUDENT) // or if (dynamic_cast<Student*>(neighborhood[i]))
        {
            cout << dynamic_cast<Student*>(neighborhood[i])->getGPA() << endl;
        }
        else if (neighborhood[i]->getType() == Human::Type::DRUGGIE)
        {
            cout << dynamic_cast<Druggie*>(neighborhood[i])->getNumEnemy() << endl;
        }
        cout << neighborhood[i]->getName() << endl;
    }



    Student* student1 = new Student("Raymond", 48, 3.4f);

    cout << student1->getName() << endl;
    cout << student1->getAge() << endl;
    cout << static_cast<char>(student1->getType()) << endl;

    cout << Human::getCount() << endl;

    delete student1;
}
