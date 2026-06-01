//#include "Menager.h"
//
//int main() {
//	Student* st1 = new Student("Alex", 15);
//	Student* st2 = new Student("Peter", 9);
//	Student* st3 = new Student("Harry", 13);
//
//	int* marks = new int[5] {10, 10, 9, 8, 7};
//	st1->setMarks(marks, 5);
//
//	marks = new int[3] { 9, 8, 7};
//	st2->setMarks(marks, 3);
//
//	marks = new int[6] {7, 8, 9, 9, 9, 9};
//	st3->setMarks(marks, 6);
//
//	Group* group = new Group("P123025");
//
//	group->addStudent(st1);
//	group->addStudent(st2);
//	group->addStudent(st3);
//
//	Menager* menager = new Menager();
//
//	double avg = menager->calculateAverageMark(group);
//
//	cout << "average marks is " << avg << endl;
//
//	return 0;
//}