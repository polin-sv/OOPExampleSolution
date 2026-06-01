
#include "Human.h"
class Employee : public Human{
private:
	int salary;

public:
	Employee() {
		cout << "default employee constructor...\n";
	}

	Employee(string name,int age,bool alive,int salary) 
		: Human(name,age,alive)
	{
		/*setName(name);
		setAge(age);
		setAlive(alive);*/
		this->salary = salary;
		cout << "employee canonical constructor...\n";
	}

	~Employee() {
		cout << "employee destructor...\n";
	}
};

