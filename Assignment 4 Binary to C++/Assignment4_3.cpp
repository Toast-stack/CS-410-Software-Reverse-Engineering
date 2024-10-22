//============================================================================
// Name        : Assignment4_3.cpp
// Author      : Zachary Nicholas
// Version     :
// Copyright   : Your copyright notice
// Description : Program to print Stars based off of user's entered number
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int c;
	cout<<"Enter a number for rows: ";
	cin >> c;
	//A == row, B == Star, C == User in D == space

	for(int a =1; a<=c; ++a){
		for(int d = 1; d <= c-a; ++d){
			cout << (" ");
		}
		for(int b = 1; b <= 2*a-1; ++b){
			cout << ("*");
		}
		cout << endl;
	}
	for(int a = 1; a<=c-1; a++){
		for(int d = 1; d <= a; ++d){
			cout<<(" ");
		}
		for(int b =1; b < 2*(c - a)-1; ++b){
			cout<< ("*");
		}
		cout << endl;
	}
	return 0;
}
