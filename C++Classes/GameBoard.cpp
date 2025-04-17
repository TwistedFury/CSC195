#include <iostream>

#include "GameBoard.h"

GameBoard::~GameBoard()
{
	for (GameObject* obj : objects)
	{
		delete obj;
	}
	objects.clear();
}

void GameBoard::Create(unsigned short characterStatus)
{
	GameObject* toAdd = new Player();

	switch (characterStatus)
	{
	case 1:
		toAdd = new Player();
		break;
	case 2:
		toAdd = new Enemy();
		break;
	default:
		break;
	}
	
	toAdd->Read();
	objects.push_back(toAdd);
}

void GameBoard::DisplayAll()
{
	for (GameObject* obj : objects)
	{
		obj->Write();
		std::cout << std::endl;
	}
}

void GameBoard::Display(GameObject::Type type)
{
	for (GameObject* obj : objects)
	{
		if (obj->GetType() == type)
		{
			obj->Write();
		}
	}
}

void GameBoard::DisplayEnemies()
{
	for (GameObject* obj : objects)
	{
		if (dynamic_cast<Enemy*>(obj))
		{
			obj->Write();
		}
	}
}

void GameBoard::DisplayPlayers()
{
	for (GameObject* obj : objects)
	{
		if (dynamic_cast<Player*>(obj))
		{
			obj->Write();
		}
	}
}
