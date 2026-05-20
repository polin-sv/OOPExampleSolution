#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	int id;
	string name;
	int age;
	double mark;
	int class_number;
	char class_letter;
	bool alive;

	Student() {
	//	cout << "student default constructor" << endl;
		id = 0;
		name = "";
		age = 0;
		mark = 0;
		class_number = 0;
		class_letter = '\0';
		alive = false;
	}

	// canonical constructor
	Student(int i, string nm,int ag, int number, char letter,double mrk,bool a) {
		id = i;
		name = nm;
		age = ag;
		class_number = number;
		class_letter = letter;
		mark = mrk;
		alive = a;
	}

	Student(string nm, int ag) {
		id = 0;
		name = nm;
		age = ag;
		class_number = 0;
		class_letter = '\0';
		mark = 0;
		alive = true;
	}

	//copy-constructor
	Student(const Student& student) {
		id = student.id;
		name = student.name;
		age = student.age;
		class_number = student.class_number;
		class_letter = student.class_letter;
		mark = student.mark;
		alive = student.alive;
	}

	string toString(){
		string s = "student: ";
		s += name;
		s += ", age = " + to_string(age);
		s += ", class = " + to_string(class_number) + to_string(class_letter);
		s += ", mark = " + to_string(mark);
		s += ", alive = ";
		s += (alive ? "yes" : "no");

		return s;
	}
};