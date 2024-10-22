//============================================================================
// Name        : Assignment4_4.cpp
// Author      : Zachary Nicholas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int b = 1;
	int c;

	cout<< "Enter a number: " << endl;
	cin >> c;

	while(c != 0){
		int d = c % 10;
		a += d * b;
		b *= 2;
		c /= 10;
	}
	cout << "Result: " << a << endl;
	return 0;
}
