#include <iostream>
#include <string>
using namespace std;

int main() {
	int year, total=0;
	cout << "Please enter a 4-digit year: ";
	cin >> year; 
	if (year < 1000 && year>9999) {
		cout << "Invalid input!";
		return 0;
	}
	string temp = to_string(year);
	total += int(temp[0])-48;
	total += int(temp[1])-48;
	total += int(temp[2])-48;
	total += int(temp[3])-48;
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		cout << year << " is a leap year! \n" << temp[0] << " + " << temp[1] << " + " << temp[2] << " + " << temp[3] << " = " << total;
	else
		cout << year << " is not a leap year!";
	
	
	
}
/*
Please enter a 4-digit year: 982
982 is not a leap year!
Please enter a 4-digit year: 2100
2100 is not a leap year!
Please enter a 4-digit year: 2316
2316 is a leap year!
2 + 3 + 1 + 6 = 12
*/