#include <array>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <iterator>

#include <iostream>

using namespace std;

// This entire project was done one step at a time (part one, part two, part three, etc.)
// This is just how I format things, as seen prior in every assignment that I have done.
// This was 'organized' before part six

void doArrays() {
	array<string, 7> weekdays; // This can also be done with string weekdays[7];
	
	weekdays[0] = "Monday";
	weekdays[1] = "Tuesday";
	weekdays[2] = "Wednesday";
	weekdays[3] = "Thursday";
	weekdays[4] = "Friday";
	weekdays[5] = "Saturday";
	weekdays[6] = "Sunday";

	for (string day : weekdays) {
		cout << day << endl;
	}
}

void doVectors() {
	vector<int> ints = { 1, 2, 3, 4, 5 };
	ints.push_back(6);
	ints.push_back(7);

	ints.pop_back();

	for (int number : ints) {
		cout << number << endl;
	}
}

void doLists() {
	list<string> fruits = { "Banana", "Cherry", "Dragon Fruit" };
	fruits.push_front("Apple"); // Place "Apple" at front
	fruits.push_back("Elderberry"); // Place "Elderberry" at end

	for (int i = 0; i < fruits.size() - 1; i++) {
		cout << fruits.front() << endl;
		fruits.pop_front();
	}
}

void doMaps() {
	map<string, int> groceryProducts = { { "Bananas", 5 }, { "Apples", 2 }, { "Coconuts", 15 } };
	groceryProducts["Bananas"] = 10;
	
	// Snip-bit of code found at : https://www.codecademy.com/resources/docs/cpp/maps ; particularily under 'Comparison Function'
	// Initializing iterator
	map<string, int> ::iterator iter;

	for (iter = groceryProducts.begin(); iter != groceryProducts.end(); ++iter) {
		cout << iter->first << " " << iter->second << endl;
	}
}

int main() {
	doArrays();
	doVectors();
	doLists();
	doMaps();
}