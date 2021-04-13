#pragma once
#include "Vehicle.h"
class MotorBike :	public Vehicle
{
private:
	int milesPerGallon;
	string brand;
public:
	int getMilesPerGallon();
	void setMilesPerGallon(int milesPerGallon);
	string getBrand();
	void setBrand(string brand);
	void calculateTaxes();
	void show();

};

