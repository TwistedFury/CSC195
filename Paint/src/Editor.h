#pragma once

#include "Shape.h"
#include "raylib.h"
#include <vector>
#include <array>

class Editor
{
public:
	~Editor();
	Editor();

	void Update();
	void Draw();

private:
	float size = 20;
	Shape::Type curType = Shape::Type::Circle;
	const std::array<Color, 8> colors = { WHITE, GREEN, RED, BLUE, PURPLE, SKYBLUE, MAGENTA, DARKBROWN };
	char curColorIndex = 0;

	std::vector<Shape*> shapes;
	Shape* curShape = nullptr;

	Shape* Create(Shape::Type type);
	void ClearAll();

	void InitializeInstructions();
};
