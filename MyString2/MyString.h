#pragma once

using namespace std;

class myString
{
private:
	char *word;
public:
	myString();
	char* getWord() const;
	myString(const char *newChar);
	myString(const myString &other);
	myString operator=(const myString &other);
	myString operator+(const myString &other);
	bool operator==(const myString &other);
	~myString();
};

ostream &operator<<(ostream &output, const myString &other);
