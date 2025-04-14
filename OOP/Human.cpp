#include "Human.h"

int Human::m_count = 0;
const float Human::m_tax = 0.00825f;

void func()
{
    cout << "funcy\n";
}

void Human::setAge(unsigned short age) { m_age = age; }