#include <iostream>

using namespace std;

/* Defining Variables */
string name;
char initial;
short age;
bool isAdult;
unsigned int zipcode;
float wage;
short daysWorked;
float hoursWorkedPerDay[7];
const float TAX = 0.1f; // 10% tax rate

float totalHours, grossIncome, taxAmount, netIncome;

int main()
{
	


}

void userInput() {
	cout << "Enter first name: ";
	cin >> name;

	cout << "Enter inital of last name: ";
	cin >> initial;

	cout << "Enter age: ";
	cin >> age;
	isAdult = age >= 18; // Check if age is that of an adult and updates value

	cout << "Enter zipcode: ";
	cin >> zipcode;

	cout << "Enter hourly wage: ";
	cin >> wage;

	cout << "Enter number of days worked (per week, max 7): ";
	cin >> daysWorked;
}

void getTotalHoursWorked() {
	totalHours = 0; // Initialize total hours to 0

	for (int i = 0; i < daysWorked; i++) {
		cout << "Enter hours worked for day " << (i + 1) << ": ";
		cin >> hoursWorkedPerDay[i];

		totalHours += hoursWorkedPerDay[i]; // Add up hours
	}
}

void calculatePayroll() {
	grossIncome = totalHours * wage;
	taxAmount = grossIncome * TAX;
	netIncome = grossIncome - taxAmount;
}

void displayPayroll() {
	/* I'm not typing that one, no thanks..*/
	cout << "\nEmployee Payroll Summary\n";
	cout << "-------------------------\n";
	cout << "Name: " << name << " " << initial << ".\n";
	cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
	cout << "Zipcode: " << zipcode << "\n";
	cout << "Hourly Wage: $" << wage << " per hour\n";
	cout << "Total Hours Worked: " << totalHours << " hours\n";
	cout << "Gross Income: $" << grossIncome << "\n";
	cout << "Tax Amount: $" << taxAmount << "\n";
	cout << "Net Income: $" << netIncome << "\n";
}

