#include "Human.h"

int Human::m_count = 0;
const float Human::m_tax = 0.00825f;

void func()
{
    cout << "funcy\n";
}

void Human::setAge(unsigned short age) { m_age = age; }

void Human::Read()
{
    std::cout << "Enter name:\t";
    std::cin >> m_name;
    std::cout << endl;
    std::cout << "Enter age:\t";
    std::cin >> m_age;
    std::cout << endl;
}

void Human::Write()
{
    std::cout << "Name:\t" << m_name << "\t(" << m_age << ")";
}
