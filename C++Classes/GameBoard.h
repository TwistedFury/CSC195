#pragma once

#include <iostream>
#include <vector>

#include "Player.h"
#include "Enemy.h"

class GameBoard
{
public:
	~GameBoard();

	void Create(unsigned short characterStatus);
	void DisplayAll();
	void Display(GameObject::Type type);

	void DisplayEnemies();
	void DisplayPlayers();

private:
	std::vector<GameObject*> objects;
};
