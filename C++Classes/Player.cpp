#include <iostream>

#include "Player.h"

void Player::Read()
{
    GameObject::Read();
    std::cout << "Enter level: ";
    std::cin >> level;
}

void Player::Write()
{
    std::cout << "PLAYER\n";
    GameObject::Write();
    std::string aliveStatus = isAlive ? "Alive" : "Dead";
    std::cout << "Level: " << GetLevel() << " Status: " << aliveStatus << std::endl;
}

GameObject::Type Player::GetType()
{
    return GameObject::GetType();
}

Level Player::GetLevel()
{
    return level;
}
