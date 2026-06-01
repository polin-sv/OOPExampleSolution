#pragma once
#include "Human.h"

class Student {
private:
	int id;
	int* marks;
	int count;
	int classNumber;
	char classLetter;
public:

	Student();
	Student(int i, string nm, int ag, int number, char letter, bool a);
	Student(string nm, int ag);
	Student(const Student& student);
	~Student();

	int getID();
	void setID(int i);
	int getClassNumber();
	void setClassNumber(int number);
	char getClassLetter();
	void setClassLetter(char letter);
	int* getMarks();
	void setMarks(int* ms, int c);
	int getCount();

	string toString();
};