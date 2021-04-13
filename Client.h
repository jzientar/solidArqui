#pragma once
#include <iostream>
using namespace std;
class Client
{
private:
	string name;
	string dayOfBirth;
	string address;
public:
	string getName();
	void setName(string name);
	string getDayOfBirth();
	void setDayOfBirth(string dayOfBirth);
	string getAddress();
	void setAddress(string address);
	virtual void show();
};

