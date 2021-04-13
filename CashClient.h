#pragma once
#include "Client.h"
class CashClient : public Client
{
private:
	int paid;
	string datePaid;
public:
	int getTotalPaid();
	void setTotalPaid(int paid);
	string getDatePaid();
	void setDatePaid(string datePaid);
	void show();
};

