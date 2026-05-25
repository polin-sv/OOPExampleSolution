#include "Student.h"

Student::Student() {
	//	cout << "student default constructor" << endl;
	id = 0;
	name = "";
	age = 0;
	marks = new int[3] {10, 9, 8};
	classNumber = 0;
	classLetter = '\0';
	alive = false;
}

// canonical constructor
Student::Student(int i, string nm, int ag, int number, char letter, bool a) {
	cout << "student canonical constructor...\n";
	id = i;
	name = nm;
	age = ag;
	classNumber = number;
	classLetter = letter;
	marks = new int[3] {10, 9, 8};
	count = 3;
	alive = a;
}

Student::Student(string nm, int ag) {
	id = 0;
	name = nm;
	age = ag;
	classNumber = 0;
	classLetter = '\0';
	marks = new int[3] {10, 9, 8};
	count = 3;
	alive = true;
}

//copy-constructor
Student::Student(const Student& student) {
	cout << "student copy-constructor ..." << endl;
	id = student.id;
	name = student.name;
	age = student.age;
	classNumber = student.classNumber;
	classLetter = student.classLetter;
	marks = new int[3] {student.marks[0],
		student.marks[1],
		student.marks[2]};
	count = 3;
	alive = student.alive;
}

Student::~Student() {
	cout << "student destructor..." << endl;
	if (marks != NULL) {
		delete[] marks;
	}
}

int Student::getID() {
	return id;
}

void Student::setID(int i) {
	id = i;

}

string Student::getName() {
	return name;
}

void Student::setName(string nm) {
	name = nm;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int a) {
	if (a > 10) {
		age = a;
	}
}

int Student::getClassNumber() {
	return classNumber;
}

void Student::setClassNumber(int number) {
	if (number >= 1 && number <= 11) {
		classNumber = number;
	}
}

char Student::getClassLetter() {
	return classLetter;
}

void Student::setClassLetter(char letter) {
	letter = toupper(letter);

	if (letter >= 'A' && letter <= 'Z') {
		classLetter = letter;
	}
}

bool Student::isAlive() {
	return alive;
}

void Student::setAlive(bool a) {
	alive = a;
}

int* Student::getMarks() {
	return marks;
}

void Student::setMarks(int* ms, int c) {
	if (marks != NULL && c > 0) {
		delete marks;

		marks = new int[c];

		for (int i = 0; i < c; i++)
		{
			marks[i] = ms[i];
		}

		count = c;
	}

}

int Student::getCount() {
	return count;
}

string Student::toString() {
	string s = "student: ";
	s += name;
	s += "[" + to_string(id) + "]";
	s += ", age = " + to_string(age);
	s += ", class = " + to_string(classNumber) + to_string(classLetter);
	s += ", marks = " + to_string(marks[0]) + ", "
		+ to_string(marks[1]) + ", " + to_string(marks[2]) + ", ";
	s += ", alive = ";
	s += (alive ? "yes" : "no");

	return s;
}