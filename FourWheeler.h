#pragma once
#include "Vehicle.h"
class FourWheeler :	public Vehicle
{
private:
	bool racingCar;
	int doorsNumber;
public:
	bool getRacingCar();
	void setRacingCar(bool racingCar);
	int getDoorNumber();
	void setDoorNumber(int doorsNumber);
	void calculateTaxes();
	void show();
	

};

