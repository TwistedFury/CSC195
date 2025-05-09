#pragma once
#include "Human.h"
#include <iostream>

class Student : public Human
{
public:
	Student() 
	{
		std::cout << "student constructor\n";
	}
	Student(std::string name, age_t age, float gpa) :
		Human{ name, age },
		gpa{ gpa }
	{
		std::cout << "student constructor\n";
	}

	void Read() override;
	void Write() override;

	float getGPA() { return gpa; }
	void setGPA(float gpa) { this->gpa = gpa; }

	Type getType() override { return Type::STUDENT; }

private:
	float gpa = 4.0f;
};
