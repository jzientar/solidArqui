#include "CreditClient.h"

int CreditClient::getTotalPayments()
{
	return totalPayments;
}

void CreditClient::setTotalPayments(int totalPayments)
{
	this->totalPayments = totalPayments;
}

int CreditClient::getPaymentMade()
{
	return paymentsMade;
}

void CreditClient::setTotalAmounts(int totalAmount)
{
	this->totalAmount = totalAmount;
}

int CreditClient::getTotalPayments()
{
	return totalPayments;
}

void CreditClient::setTotalPayments(int totalPayments)
{
	this->totalPayments = totalPayments;
}

void CreditClient::show()
{
	cout << "CREDIT CLIENT" << endl;
	Client::show();
	cout << "Total paid: " << totalPayments << endl;
	cout << "Payments made: " << paymentsMade << endl;
	cout << "Total amount : " << totalAmount << endl;
}
