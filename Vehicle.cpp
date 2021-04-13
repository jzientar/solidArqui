#include "Vehicle.h"

Client* Vehicle::getOwner()
{
	return owner;
}

void Vehicle::setOwner(Client* owner)
{
	this->owner = owner;
}

string Vehicle::getLicensePlate()
{
	return licensePlate;
}

void Vehicle::setLincesePlate(string licensePlate)
{
	this->licensePlate = licensePlate;
}

int Vehicle::getTaxes()
{
	return taxes;
}

void Vehicle::show()
{
	owner->show();
	cout << "License plate: " << licensePlate << endl;
	cout << "Taxes: " << taxes << endl;
}
