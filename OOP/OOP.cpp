#include <iostream>

// #include "Human.h" ( because "Student.h" already includes "Human.h" )
#include "Student.h"

using namespace std;

int main()
{
    {
        Student student1("Raymond", 48, 3.4f);

        cout << student1.getName() << endl;
        cout << student1.getAge() << endl;
    }

    cout << Human::getCount() << endl;
}
