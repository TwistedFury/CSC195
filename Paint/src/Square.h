#pragma once

#include "Shape.h"

class Square : public Shape
{
public:
	Square() = default;
	Square(const Vector2& pos, float size = 20, const Color& color = BLANK) :
		Shape(pos, size, color)
	{ }

	void Update() override;
	void Draw() override;
	Type GetType() override { return Type::Square; }
};
