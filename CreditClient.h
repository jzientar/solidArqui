#pragma once
#include "Client.h"
class CreditClient :	public Client
{
private:
	int totalPayments;
	int paymentsMade;
	int totalAmount;
public:
	int getTotalPayments();
	void setTotalPayments(int totalPayments);
	int getPaymentMade();
	void setPaymentsMade(int paymentsMade);
	int getTotalAmounts();
	void setTotalAmounts(int totalAmount);
	void show();
};

