#include "Group.h"
#include "Employee.h"

class Menager : public Employee{

public:
	Menager() {
		cout << "default employee constructor...\n";
	}

	~Menager() {
		cout << "employee destructor...\n";
	}
	double calculateAverageMark(Group* group);
};


