#include "Human.h"

Human::Human() : Human("no name",0,true){
	cout << "Human default constructor...\n";
}
Human::Human(string name, int age, bool alive) {
	cout << "Human constructor with arguments...\n";
	this->name = name;
	this->age = (age > 0 ? age : 0);
	this->alive = alive;
}
Human::Human(const Human& human) : Human(human.name,
	human.age,human.alive){
	cout << "Human copy constructor...\n";

}

Human::~Human() {
	cout << "Human destructor...\n";

}

string Human::getName() {
	return name;
}

void Human::setName(string name) {
	this->name = name;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int age) {
	if (age > 10) {
		this->age = age;
	}
}
bool Human::isAlive() {
	return alive;
}

void Human::setAlive(bool alive) {
	this->alive = alive;
}

string Human::toString() {
	string s = "student: ";
	s += name;
	s += ", age = " + to_string(age);
	s += ", alive = ";
	s += (alive ? "yes" : "no");

	return s;
}
#include "Human.h"

Human::Human() : Human("no name",0,true){
	cout << "Human default constructor...\n";
}
Human::Human(string name, int age, bool alive) {
	cout << "Human constructor with arguments...\n";
	this->name = name;
	this->age = (age > 0 ? age : 0);
	this->alive = alive;
}
Human::Human(const Human& human) : Human(human.name,
	human.age,human.alive){
	cout << "Human copy constructor...\n";

}

Human::~Human() {
	cout << "Human destructor...\n";

}

string Human::getName() {
	return name;
}

void Human::setName(string name) {
	this->name = name;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int age) {
	if (age > 10) {
		this->age = age;
	}
}
bool Human::isAlive() {
	return alive;
}

void Human::setAlive(bool alive) {
	this->alive = alive;
}

string Human::toString() {
	string s = "student: ";
	s += name;
	s += ", age = " + to_string(age);
	s += ", alive = ";
	s += (alive ? "yes" : "no");

	return s;
}
