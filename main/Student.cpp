#include "Student.h"

Student::Student() : Student(0, "no name", 10, 0, '\0', true) {
}

// canonical constructor
Student::Student(int id, string name, int age, int number, char letter, bool alive)
	: Human(name, age, id)
{
	cout << "student canonical constructor...\n";
	this->id = id;
	classNumber = number;
	classLetter = letter;
	marks = NULL;
	count = 0;
}

Student::Student(string name, int age) : Student() {
	cout << "Student constructor with arguments...\n";

}

//copy-constructor
Student::Student(const Student& student) : Student(student.id,student.name,
	student.age,student.classNumber,student.classLetter,student.alive){
	cout << "student copy-constructor ..." << endl;

	if (student.marks != NULL && student.count > 0) {
		count = student.count;

		marks = new int[count];

		for (int i = 0; i < count; i++)
		{
			marks[i] = student.marks[i];
		}
	}
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

void Student::setID(int id) {
	this->id = id;

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

int* Student::getMarks() {
	return marks;
}

void Student::setMarks(int* marks, int count) {
	if (marks != NULL && count > 0) {
		delete this->marks;

		this->marks = new int[count];

		for (int i = 0; i < count; i++)
		{
			this->marks[i] = marks[i];
		}

		this->count = count;
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
	s += ", marks = {";
	for (int i = 0; i < count; i++)
	{
		s += " " + to_string(marks[i]);
	}
	s += "}";
	s += ", alive = ";
	s += (alive ? "yes" : "no");

	return s;
}