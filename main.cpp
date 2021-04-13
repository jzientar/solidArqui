#include "MotorBike.h"
#include "FourWheeler.h"

int main()
{
	Client *clients[2];
	Vehicle* vehicles[2];
	
	CashClient *cash = new CashClient;
	cash->setName("Charles");
	cash->setDayOfBirth("14/05/1980");
	cash->setAddress("Ave. Santa Cruz");
	cash->setDatePaid("05/10/2015");
	cash->setTotalPaid(15000);
	clients[0] = cash;
	
	FourWheeler* fourwheeler = new FourWheeler;
	fourwheeler->setRacingCar(true);
	fourwheeler->setOwner(clients[0]);
	fourwheeler->setDoorNumber(2);
	fourwheeler->setLincesePlate("MD5996");
	fourwheeler->calculateTaxes();
	fourwheeler->show();
	vehicles[0] = fourwheeler;

	MotorBike* motorbike = new MotorBike;
	motorbike->setMilesPerGallon(65);
	motorbike->setOwner(clients[1]);
	motorbike->setBrand("Yamaha");
	motorbike->setLincesePlate("SHA256");
	motorbike->calculateTaxes();
	motorbike->show();
	vehicles[1] = motorbike;

	return 0;
}