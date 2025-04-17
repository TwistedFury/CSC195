#include <iostream>

#include "Enemy.h"

void Enemy::Read()
{
    GameObject::Read();
    std::cout << "Armor Class?: ";
    std::cin >> armorClass;

    std::cout << "Health?: ";
    std::cin >> health;
}

void Enemy::Write()
{
    std::cout << "ENEMY\n";
    GameObject::Write();
    std::cout << "AC: " << GetArmorClass() << "\tHealth: " << GetHealth() << std::endl;
}

GameObject::Type Enemy::GetType()
{
    return GameObject::GetType();
}

AC Enemy::GetArmorClass()
{
    return armorClass;
}

Health Enemy::GetHealth()
{
    return health;
}
