#include "Student.h";
#include <iostream>;

void f();

void Student::Write() 
{
    std::cout << "Student:\n";
    Human::Write();
    std::cout << "\nGPA: " << getGPA() << endl;
}

void Student::Read()
{
    Human::Read();
    std::cout << "Current GPA:\t";
    std::cin >> gpa;
    std::cout << endl;
}