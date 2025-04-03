#include "Student.h"
#include <string>
#include <iostream>

using namespace std;

struct Person { /* Data Structure(typically holds only data) */

    /* Default access level (PUBLIC) */

    float weight;

    string name;
    int age;
};

int main() {
    f();
    Student student("That guy");
    student.Write();

    Person person;
    person.age = 19;

    unsigned int i = -23;
    printf("%d\n", i); // curious how it prints it as negative here
    cout << i << endl;
    cout << sizeof(int) << endl;

    char c = 'A';
    cout << (int) c << endl;

    cout << sizeof(string) << endl;

    cout << sizeof(Person) << endl;

    cout << (char) 67 << endl; // Letter 'C'
    cout << &i << endl; // Address

    i++; // All arithmetic operators exist
    i += 5;

    cout << i << endl;
    i++; // Post-fix: Do the operation after
    ++i; // Pre-fix: Do the operation prior

    cout << "Hello, World!" << endl;
    cout << "Git is now tracking this project!" << endl;
    return 0;
}