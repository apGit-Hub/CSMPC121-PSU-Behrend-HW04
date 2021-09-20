#include <iostream>
#include <string>
using namespace std;

int main() {
	int year, total=0;
	cout << "Please enter a 4-digit year: ";
	cin >> year; 
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		cout << year << " is a leap year! ";
	else
		cout << year << " is not a leap year!";
	
}
/*
Please enter a 4-digit year: 2012
2012 is a leap year!
Please enter a 4-digit year: 2100
2100 is not a leap year!
Please enter a 4-digit year: 2400
2400 is a leap year!
*/