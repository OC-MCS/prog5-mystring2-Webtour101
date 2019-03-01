//=================================
// Josiah Ferguson
// Due March 1st 2019
// Assignment 5
// Description: custom string class
//=================================
#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
	myString s1;
	myString s2;
	myString s3;
	myString s4;
	myString s5;
	myString s6;

	s1 = "to be raplaced";
	s2 = "on";
	s3 = "a";
	s4 = "raft";
	s6 = "raft";

	cout << "S1 holds: " << s1 << endl;

	s5 = s1;

	cout << "S5 holds: " << s5 << endl;

	s1 = "Chicken";

	cout << "Now, S1 holds: " << s1 << endl;
	cout << "And S5 still holds: " << s5 << endl;

	if (s4 == s6)
	{
		cout <<"S4 has: " << s4 << " which is equal to what S5 has: " << s6 << endl << endl;
	}
	else
	{
		cout << s4 << " is not equal to " << s6 << endl << endl;
	}
	cout << "S1 + S2 + S3 + S4 = " << s1 + s2  + s3 + s4 << endl;

	s5 = s1 + s2 + s3 + s4;

	cout << "Now, S5 holds: " << s5 << endl;







	return 0;
}