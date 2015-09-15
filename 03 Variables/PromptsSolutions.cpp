#include <iostream>
using namespace std;

int main()
{
	// problem 1
	// you can use any numbers
	int a = 6, b = 30, c = 28;
	cout << a + b + c << endl;

	// problem 2
	int d = a*b*c;
	cout << d << endl;

	// problem 3
	int average = (b + c + d)/3.0;
	cout << average << endl;

	// problem 4
	// your taste in music sucks
	string song = "Waifu Dream";
	string artist = "Sushi Killer";
	cout << "My favorite song is " << song << " by " << artist << ".\n";

	// problem 5
	double num;
	cout << "Gimme a number: ";
	cin >> num;
	cout << num/2.0 << endl;

	// problem 6
	int age;
	int ageWeeks;
	double newAgeDays;
	cout << "How old are ya bruh?" << endl;
	cin >> age;
	ageWeeks = age*52;
	newAgeDays = ageWeeks%52;
	cout << "You are " << ageWeeks << " weeks old." << endl;
}