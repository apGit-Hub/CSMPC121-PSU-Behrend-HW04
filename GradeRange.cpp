#include <iostream>
#include <string>
using namespace std; 

int main() {
	char grade;
	string symbol;
	cout << "Enter a letter grade: ";
	cin >> grade; 
	grade = toupper(grade);
	if (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'F') {
		cout << grade << " is not a valid grade.";
		return (0);
	}
	cout << "Enter a sign (+ or -) if it exists; otherwise enter 'x': ";
	cin >> symbol;
	if (symbol == "+" && grade == 'A') {
		cout << grade << symbol << " is not a valid grade.";
		return 0;
	}
	else if (symbol == "-" && grade == 'C') {
		cout << grade << symbol << " is not a valid grade.";
		return 0;
	}
	else if (symbol == "+" && grade == 'D') {
		cout << grade << symbol << " is not a valid grade.";
		return 0;
	}
	if (symbol == "+" && grade == 'F') {
		cout << grade << symbol << " is not a valid grade.";
		return 0;
	}
	if (symbol == "-" && grade == 'D') {
		cout << grade << symbol << " is not a valid grade.";
		return 0;
	}
	if (symbol == "-" && grade == 'F') {
		cout << grade << symbol << " is not a valid grade.";
		return 0;
	}
		
	if (grade == 'A' && symbol == "x")
		cout << "93% or greater";
	else if (grade == 'F' && symbol == "x")
		cout << "Less than 60%";
	else if (grade == 'A' && symbol == "-")
		cout << "Less than 93% and greater than or equal to 90%";
	else if (grade == 'B' && symbol == "-")
		cout << "Less than 83% and greater than or equal to 80%";
	else if (grade == 'B' && symbol == "x")
		cout << "Less than 87% and greater than or equal to 83%";
	else if (grade == 'B' && symbol == "+")
		cout << "Less than 90% and greater than or equal to 87%";
	else if (grade == 'C' && symbol == "+")
		cout << "Less than 80% and greater than or equal to 77%";
	else if (grade == 'C' && symbol == "x")
		cout << "Less than 77% and greater than or equal to 70%";
	else if (grade == 'D' && symbol == "x")
		cout << "Less than 70% and greater than or equal to 60%";
	

}
/*
Enter a letter grade: D

Enter a sign (+ or -) if it exists; otherwise enter 'x': +

D+ is not a valid grade.

Enter a letter grade: C

Enter a sign (+ or -) if it exists; otherwise enter 'x': x

Less than 77% and greater than or equal to 70%

Enter a letter grade: B

Enter a sign (+ or -) if it exists; otherwise enter 'x': -

Less than 83% and greater than or equal to 80%

*/