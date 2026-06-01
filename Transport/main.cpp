#include "Bus.h"
#include "Truck.h"
#include "GasStation.h"

int main() {
	Bus* bus1 = new Bus(300);
	Bus* bus2 = new Bus(250);

	Truck* truck1 = new Truck(350);
	Truck* truck2 = new Truck(500);
	Truck* truck3 = new Truck(600);

	int size = 5;
	Transport** transports = new Transport * [size]
	{bus1, bus2, truck1, truck2, truck3};

	GasStation* station = new GasStation();
	int total = station->calculateTotalGas(transports, size);

	cout << "total: " << total << endl;

	delete bus1;
	delete bus2;
	delete truck1;
	delete truck2;
	delete truck3;

	delete[] transports;

	return 0;
}