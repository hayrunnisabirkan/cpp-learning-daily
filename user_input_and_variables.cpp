#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	int birthYear;
	const int currentYear = 2026;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your birth year: ";
	cin >> birthYear;

	int age = currentYear - birthYear; 

	cout << "Hello, " << name << "! You are " << age << " years old." << endl;

	return 0;
}