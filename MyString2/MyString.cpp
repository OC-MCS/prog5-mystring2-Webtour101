#include <iostream>
#include "MyString.h"

using namespace std;

//====================================================== 
// myString: Constructor to initialize member to a null pointer.
// 
//	It is of the myString class.
//
// return type: none
//======================================================
myString::myString()
{
	word = nullptr;
}

//====================================================== 
// getWord: A getter function to get the address of the given string.
//	It is of the myString class.
// parameters:
//	const pointer: Returning the address of the created string of charecters
// return type: char
//======================================================
char *myString::getWord() const
{
	return word;
}

//====================================================== 
// myString: Copy constructor to set the string into the private variable 
//	It is of the myString class.
// parameters:
//	   *newChar: the address of charecters to be copied into the myString variable
// return type: none
//======================================================
myString::myString(const char *newChar)
{
	word = new  char[strlen(newChar) + 1];
	strcpy_s(word, strlen(newChar) + 1, newChar);
}

//====================================================== 
// myString: Constructor to set the string into the private variable 
//	It is of the myString class.
// parameters:
//	   &other: the address of one myString variable to be copied into another myString variable
// return type: none
//======================================================
myString::myString(const myString &other)
{
	word = new char[strlen(other.word) + 1];
	strcpy_s(word, (strlen(other.word) + 1), other.word);
}

//====================================================== 
// operator=: operator to put a copy of whatever is in one myString into another.
//	It is of the myString class.
// parameters:
//	   other: the address of charecters to be copied into the myString variable
// return type: myString
//======================================================
myString myString::operator=(const myString &other)
{
	cout << "The copy constructor was called." << endl;
	if (this != &other)
	{
		delete[] word;
		word = new char[strlen(other.word) + 1];
		strcpy_s(word, (strlen(other.word) + 1), other.word);
	}
	return *this;
}

//====================================================== 
// operator+: operator to concatonate a copy of whatever is in one myString onto another.
//	It is of the myString class.
// parameters:
//	   other: the address of charecters to be concatonated into the myString variable
// return type: myString
//======================================================
myString myString::operator+(const myString &other)
{
	myString temp;

	int size = strlen(other.word) + strlen(word) + 2;
	temp.word = new char[size];

	strcpy_s(temp.word, size, word);
	strcat_s(temp.word, size, " ");
	strcat_s(temp.word, size, other.word);

	return temp;
}

//====================================================== 
// operator==: operator to compare two myStrings to see if they contain the same thing.
//	It is of the myString class.
// parameters:
//	   other: the address of charecters to be compared with another
// return type: bool
//======================================================
bool myString::operator==(const myString &other)
{
	bool equal;

	if (strcmp(other.word, word) == 0)
	{
		equal = true;
	}
	else
	{
		equal = false;
	}
	return equal;
}

//====================================================== 
// operator<<: operator to put allow the output of the custom made string using cout.
//	It is of the ostream class.
// parameters:
//	   other: the address of charecters to be allowed to be output
// return type: ostream
//======================================================
ostream &operator<<(ostream &output, const myString &other)
{
	output << other.getWord();
	return output;
}

//====================================================== 
// ~myString: Deconstructor to delete the allocated memory for the pointers.
//	It is of the myString class.
// parameters:
//	   
// return type: none
//======================================================
myString::~myString()
{
	delete[] word;
	cout << "The Deconstructor was called" << endl;
}