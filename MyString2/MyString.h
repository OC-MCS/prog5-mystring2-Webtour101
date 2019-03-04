#pragma once

using namespace std;

class myString
{
private:
	char *word;
public:
	myString(); //constructor
	char* getWord() const; //gets the word for output
	myString(const char *newChar); //constructor * char, for string literals
	myString(const myString &other); //copy constructor
	myString operator=(const myString &other); //over=
	myString operator+(const myString &other);//over+
	bool operator==(const myString &other);//over==
	~myString();//destructor
};

ostream &operator<<(ostream &output, const myString &other);
