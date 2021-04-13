#include "Client.h"

string Client::getName()
{
	return name;
}

void Client::setName(string name)
{
	this->name = name;
}

string Client::getDayOfBirth()
{
	return dayOfBirth;
}

void Client::setDayOfBirth(string dayOfBirth)
{
	this->dayOfBirth = dayOfBirth;
}

string Client::getAddress()
{
	return address;
}

void Client::setAddress(string address)
{
	this->address = address;
}

void Client::show()
{
	cout << "Name: " << name << endl;
	cout << "Day of Birth: " << dayOfBirth << endl;
	cout << "Address: " << address << endl;
}
