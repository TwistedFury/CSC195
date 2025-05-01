#pragma once

#include "Shape.h"

class Triangle : public Shape
{
public:
	
	Triangle() = default;
	Triangle(const Vector2& pos, float size = 20, const Color& color = BLANK) :
		Shape(pos, size, color)
	{ };


	void Update() override;
	void Draw() override;
	Type GetType() override { return Type::Triangle; }
};
