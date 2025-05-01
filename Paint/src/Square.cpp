#include "Square.h"

void Square::Update()
{
	//
}

void Square::Draw()
{
	DrawRectangleV(Vector2{ pos.x - (size / 2), pos.y - (size / 2) }, Vector2{ size, size }, color);
}
