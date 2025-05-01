#include "Editor.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Eraser.h"

#include <string> 
#include <cstring>

Editor::~Editor()
{
	ClearAll();
	delete curShape;
}

Editor::Editor()
{
	curShape = Create(curType);
	InitializeInstructions(); // This is the instructions in the top-left
}

void Editor::Update()
{
	InitializeInstructions(); // This is the instructions in the top-left
	if (IsKeyDown(KEY_EQUAL) || IsGamepadButtonDown(1, GAMEPAD_BUTTON_LEFT_FACE_UP)) 
	{ 
		size += 0.25f; 
		if (size > 200) { size = 200; }
		curShape = Create(curType);
	}
	if (IsKeyDown(KEY_MINUS) || IsGamepadButtonDown(1, GAMEPAD_BUTTON_LEFT_FACE_DOWN)) 
	{ 
		size -= 0.25f; 
		if (size < 5) { size = 5; }
		curShape = Create(curType);
	}
	if (IsKeyPressed(KEY_DELETE) || IsGamepadButtonPressed(1, GAMEPAD_BUTTON_LEFT_TRIGGER_1))
	{
		ClearAll();
	}
	if (IsKeyPressed(KEY_C) || IsGamepadButtonPressed(1, GAMEPAD_BUTTON_RIGHT_FACE_RIGHT))
	{
		curType = Shape::Type::Circle;
		curShape = Create(curType);
	}
	if (IsKeyPressed(KEY_S) || IsGamepadButtonPressed(1, GAMEPAD_BUTTON_RIGHT_FACE_LEFT))
	{
		curType = Shape::Type::Square;
		curShape = Create(curType);
	}
	if (IsKeyPressed(KEY_T) || IsGamepadButtonPressed(1, GAMEPAD_BUTTON_RIGHT_FACE_UP))
	{
		curType = Shape::Type::Triangle;
		curShape = Create(curType);
	}
	if (IsKeyPressed(KEY_E) || IsGamepadButtonPressed(1, GAMEPAD_BUTTON_RIGHT_FACE_DOWN))
	{
		curType = Shape::Type::Eraser;
		curShape = Create(curType);
	}
	if (IsKeyPressed(KEY_RIGHT) || IsGamepadButtonPressed(1, GAMEPAD_BUTTON_RIGHT_TRIGGER_1))
	{
		curColorIndex += 1;
		curColorIndex %= colors.size();
		curShape = Create(curType);
	}
	if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) || (IsMouseButtonDown(MOUSE_BUTTON_LEFT) && IsKeyDown(KEY_LEFT_CONTROL)) || IsGamepadButtonDown(1, GAMEPAD_BUTTON_RIGHT_TRIGGER_2))
	{
		shapes.push_back(curShape);
		curShape = Create(curType);
		// Add current shape
		// Create new Shape
	}

	curShape->SetPosition(GetMousePosition());
	// Update stored shapes
	for (auto shape : shapes)
	{
		shape->Update();
	}
	// Update current shape
	curShape->Update();
}

void Editor::Draw()
{
	// Draw stored shapes
	for (auto shape : shapes)
	{
		shape->Draw();
	}
	// Draw current shape
	curShape->Draw();
}

Shape* Editor::Create(Shape::Type type)
{
	switch (type)
	{
	case Shape::Type::Circle:
		return new Circle(GetMousePosition(), size, colors[curColorIndex]);
	case Shape::Type::Square:
		return new Square(GetMousePosition(), size, colors[curColorIndex]);
	case Shape::Type::Triangle:
		return new Triangle(GetMousePosition(), size, colors[curColorIndex]);
	case Shape::Type::Eraser:
		return new Eraser(GetMousePosition(), size, BLACK, colors[curColorIndex]); // BLACK is Background Color
	}
}

void Editor::ClearAll()
{
	shapes.clear();
	ClearBackground(BLACK);
}

void Editor::InitializeInstructions()
{
	// Here we will write out the instructions of how to use this, given that we
	// Have a bunch of keybinds

	// First, we set the color of the instructions. I want it to be one that the user cannot use
	Color textColor = YELLOW;

	std::string sizeString = std::to_string(size);

	DrawText(("Keybinds:\n= : Increase Size ; - : Decrease Size \\\\\\\\ Current Size: " + sizeString + "\n").c_str(), 10, 10, 20, textColor);
	DrawText("C : Circle ; S : Square ; T : Triangle ; E : Eraser\n", 10, 50, 20, textColor);
	DrawText("[DEL] : Clear ; Right_Arrow : Next Color\n", 10, 70, 20, textColor);
	DrawText("[ESC] : Close ; Left_Click + Left_Ctrl : Drag_Draw\n", 10, 90, 20, textColor);
}
