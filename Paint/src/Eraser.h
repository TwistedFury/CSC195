#pragma once

#include "Square.h"

class Eraser : public Square
{
public:
	Eraser() = default;
	Eraser(const Vector2& pos, float size, const Color& bkgrndColor, const Color& curColor) : // bkgrndColor = backgroundColor
		Square( pos, size, bkgrndColor),
		curColor( curColor )
	{ }

	void Update() override
	{
		Vector2 pos = GetMousePosition();
		DrawRectangleLines(pos.x - (size / 2) - 1, pos.y - (size / 2), size + 5, size + 5, curColor);
	}

	void Draw() override
	{
		Update();
		Square::Draw();
	}

private:
	Color curColor;
};
