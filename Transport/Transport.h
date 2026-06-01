#pragma once
#include <iostream>
#include <string>
using namespace std;
class Transport
{
protected:
	int tank;
public:
	Transport() : tank(0) {
	}

	Transport(int tank) {
		this->tank = tank > 0 ? tank : 0;
	}

	int getTank() {
		return tank;
	}

	void setTank(int tank) {
		this->tank = tank > 0 ? tank : 0;
	}

	string toString() {
		return "transport: tank - " + to_string(tank);
	}
};

