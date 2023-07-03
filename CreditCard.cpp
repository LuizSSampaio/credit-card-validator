#include "CreditCard.h"

bool CreditCard::IsAValidCreditCard()
{
    bool bIsSecond{ false };
    int sum{ 0 };
    for (char digit : this->creditCardNumber)
    {
        int temp{ digit - '0' };
        if (bIsSecond)
        {
            temp *= 2;
        }

        sum += temp / 10;
        sum += temp % 10;

        bIsSecond = !bIsSecond;
    }

    return (sum % 10 == 0);
}

void CreditCard::SetCreditCardNumber(std::string newCreditCardNumber)
{
    this->creditCardNumber = newCreditCardNumber;
}

std::string CreditCard::GetCreditCardNumber()
{
    return this->creditCardNumber;
}
