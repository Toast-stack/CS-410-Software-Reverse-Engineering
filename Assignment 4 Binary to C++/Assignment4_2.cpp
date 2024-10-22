//============================================================================
// Name        : Assignment4_2.cpp
// Author      : Zachary Nicholas
// Version     :
// Copyright   : Your copyright notice
// Description : Finding a volume based off of user input from binary
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int user_in, a, b;
	double c, pi;
	//Gets the input from the user
	 cout << "Enter a number" << endl;
	 cin >> user_in;

	 //Assigns the variables the input from the user
	 a = user_in;
	 b = user_in;

	 //Multiplies the input by itself 3 times
	 a = a*b;
	 b = b*a;

	 //Converts the b variable to a double
	 c = (double)b;
	 pi = 3.14;

	 //Does the math for the volume
	 c = c * pi;

	 //Prints out the result of the math
	 cout << "The result is: " << c << endl;


	return 0;
}
