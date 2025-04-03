#include <iostream>

using namespace std;

struct Person {
	int xPos = 1;
	int yPos = 0;
	string facePos = "front";
};

struct Ball {

	string color;

};

Ball ball;
Person person;

void moveForward() {
	if (person.facePos == "front") {
		person.yPos++;
	}
	else if (person.facePos == "right") {
		person.xPos++;
	}
	else if (person.facePos == "back") {
		person.yPos--;
	} else {
		person.xPos--; // face left
	}
	cout << "{" << person.xPos << " , " << person.yPos << "}" << endl;
}

void turnRight() {
	cout << "Turning Right" << endl;
	if (person.facePos == "front") {
		person.facePos = "right";
	}
	else if (person.facePos == "left") {
		person.facePos = "front";
	}
	else if (person.facePos == "back") {
		person.facePos = "left";
	}
	else { // face right
		person.facePos = "back";
	}
}

void turnLeft() {
	cout << "Turning Left" << endl;
	if (person.facePos == "front") {
		person.facePos = "left";
	}
	else if (person.facePos == "left") {
		person.facePos = "back";
	}
	else if (person.facePos == "back") {
		person.facePos = "right";
	}
	else { // face right
		person.facePos = "front";
	}
}

void drawNewBall() {
	ball.color = "green"; // Hard-coded color for now
}

void drawBall() {
	drawNewBall();
	while (ball.color != "green") {
		drawNewBall();
	}
	cout << "Green ball has been drawn! Proceeding to exit!" << endl;
}

int main() {
	cout << "{" << person.xPos << " , " << person.yPos << "}" << endl;
	moveForward();
	turnLeft();
	moveForward();
	turnRight();
	for (int i = 0; i < 4; i++) {
		moveForward();
	}
	turnRight();
	moveForward();
	moveForward();
	turnRight();
	moveForward();
	turnLeft();
	drawBall();
	turnLeft();
	moveForward();
	turnLeft();
	moveForward();
	moveForward();
	turnRight();
	moveForward();
	turnRight();
	moveForward();
	turnLeft();
	moveForward();
	if (person.xPos == 1 && person.yPos == 7) {
		cout << "Successfully reached the End!!" << endl;
	}
}

/*
	ACTIONS:
	F L F R F F F F R F F R F L DB L F L F F F R F R F L F
*/
