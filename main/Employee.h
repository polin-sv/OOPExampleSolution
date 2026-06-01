
#include "Human.h"
class Employee : public Human{
private:
	int salary;

public:
	Employee() {
		cout << "default employee constructor...\n";
	}

	~Employee() {
		cout << "employee destructor...\n";
	}
};

