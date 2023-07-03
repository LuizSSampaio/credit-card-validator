#include <iostream>
#include <string>
#include "CreditCard.h"

int main()
{
	CreditCard creditCard;
	bool bIsValid;
	std::string tempCreditCardNumber;

	std::cout << "Insert a credit card number to be validated: ";
	std::cin >> tempCreditCardNumber;

	creditCard.SetCreditCardNumber(tempCreditCardNumber);
	bIsValid = creditCard.IsAValidCreditCard();

	if (bIsValid)
	{
		std::cout << "This credit card is valid!";
	}
	else
	{
		std::cout << "This credit card isn't valid.";
	}

	return 0;
}