//============================================================================
// Name        : 6-2.cpp
// Author      : Zachary Nicholas
// Version     :
// Copyright   : Your copyright notice
// Description : 6-2 Activity Binary to C++ with Security Vulnerabilities
//============================================================================

#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
	int choice = 0;
	double num1, num2;
	//Original code has these as integers switched to doubles so users can enter decimals without breaking
	while(choice != 4){ // Switched to 4 as our program will not accept any other input except 1 - 4
		cout << "Menu"<< endl;
		cout << "1) Subtract" << endl;
		cout << "2) Add" <<endl;
		cout << "3) Multiply" << endl;
		cout << "4) exit" << endl;
		cout << "Enter your choice"<< endl;
		cin >> choice;

		switch(choice){
		case 1:
			cout << "Enter two numbers:";
			cin >> num1 >> num2;
			cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl; // Changed from addition to subtraction follow what the menu shows
			break;
		case 2:
			cout << "Enter two numbers:";
			cin >> num1 >> num2;
			cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl; // Changed from subtraction to addition to follow what the menu shows
			break;
		case 3:
			cout << "Enter two numbers:";
			cin >> num1 >> num2;
			cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl; // Changed from division to multiplication to follow what the menu shows
			break;
		case 4:
			cout << "Exiting the Program" << endl; // made to exit the program when 4 is entered
			exit(0);
		default:
			cout << "The number you entered is not valid please enter a value between 1 and 4." << endl; // User input validation to ensure only number 1 - 4 lead into the program and return to beginning of loop
		}
	}
	return 0;
}
