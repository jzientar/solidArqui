#include "CashClient.h"

int CashClient::getTotalPaid()
{
	return paid;
}

void CashClient::setTotalPaid(int paid)
{
	this->paid = paid;
}

string CashClient::getDatePaid()
{
	return datePaid;
}

void CashClient::setDatePaid(string datePaid)
{
	this->datePaid = datePaid;
}

void CashClient::show()
{
	cout << "CASH CLIENT" << endl;
	Client::show();
	cout << "Total paid: " << paid << endl;
	cout << "Date paid: " << datePaid << endl;
}
