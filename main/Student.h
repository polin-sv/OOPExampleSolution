#pragma once
#include "Human.h"

class Student : public Human {
private:
	int id;
	int* marks;
	int count;
	int classNumber;
	char classLetter;
public:

	Student();
	Student(int id, string name, int age, int number, char letter, bool alive);
	Student(string name, int age);
	Student(const Student& student);
	~Student();

	int getID();
	void setID(int i);
	int getClassNumber();
	void setClassNumber(int number);
	char getClassLetter();
	void setClassLetter(char letter);
	int* getMarks();
	void setMarks(int* marks, int count);
	int getCount();

	string toString();
};