#include "FourWheeler.h"

bool FourWheeler::getRacingCar()
{
	return racingCar;
}

void FourWheeler::setRacingCar(bool racingCar)
{
	this->racingCar = racingCar;
}

int FourWheeler::getDoorNumber()
{
	return doorsNumber;
}

void FourWheeler::setDoorNumber(int doorsNumber)
{
	this->doorsNumber = doorsNumber;
}

void FourWheeler::show()
{
	string isRacingCar = "no";
	if (this->racingCar)
	{
		isRacingCar = "si";
	}
	cout << "FOUR WHEELER" << endl;
	Vehicle::show();
	cout << "Racing car: " << isRacingCar<<endl;
	cout << "Number of doors: " << doorsNumber << endl;
	cout << endl;
}

void FourWheeler::calculateTaxes()
{
	int extra = 0;
	if (racingCar)
	{
		extra = extra + 100;
	}
	taxes = (doorsNumber * 20) + extra;
}
