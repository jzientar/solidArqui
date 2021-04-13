#include "MotorBike.h"

void MotorBike::calculateTaxes()
{
	taxes = milesPerGallon * 50;
}

int MotorBike::getMilesPerGallon()
{
	return milesPerGallon;
}

void MotorBike::setMilesPerGallon(int milesPerGallon)
{
	this->milesPerGallon = milesPerGallon;
}

string MotorBike::getBrand()
{
	return brand;
}

void MotorBike::setBrand(string brand)
{
	this->brand = brand;
}

void MotorBike::show()
{
	cout << "MOTORBIKE" << endl;
	Vehicle::show();
	cout << "Miles per gallon: " << milesPerGallon << endl;
	cout << "Brand: " << brand << endl;
}
