#pragma once

#include "raylib.h"

class Shape
{
public:
	enum class Type
	{
		Circle,
		Square,
		Triangle,
		Eraser
	};

public:
	Shape() = default;

	Shape(const Vector2& pos, float size = 20, const Color& color = BLANK) :
		color{ color },
		size{ size },
		pos{ pos } 
	{ }

	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual Type GetType() = 0;

	const Vector2& GetPosition() const { return pos; } // You cannot change my reference
	void SetPosition(const Vector2 newPos) { pos = newPos; }

	const Color& GetColor() const { return color; }
	void SetColor(const Color& newColor) { color = newColor; }

	float GetSize() const { return size; }
	void SetSize(float newSize) { size = newSize; }

protected:
	Vector2 pos{ 0, 0 };
	Color color = Color{ 0, 0, 0, 0 }; // BLANK
	float size = 20;
};
