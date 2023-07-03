#pragma once
#include <string>

class CreditCard
{
private:
	std::string creditCardNumber;
public:
	bool IsAValidCreditCard();
	void SetCreditCardNumber(std::string newCreditCardNumber);
	std::string GetCreditCardNumber();
};

