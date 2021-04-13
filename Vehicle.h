#pragma once
#include <iostream>
#include "CashClient.h"
#include "CreditClient.h"
using namespace std;

class Vehicle
{
protected:
	Client* owner;
	string licensePlate;
	int taxes;
public:
	Client* getOwner();
	void setOwner(Client* owner);
	string getLicensePlate();
	void setLincesePlate(string licensePlate);
	int getTaxes();
	virtual void show();
	virtual void calculateTaxes() = 0;

};

