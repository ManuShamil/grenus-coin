#include "transaction.hpp"
#include <stdio.h>


/*  ================================================/
*   |                    256 Bits                   |
*   ================================================/
*   |        8bits          |          8bits        |
*    -----------------------------------------------
*   |   ------------------------------------------  |
* 00|   |               (128 bits)               |  |
* ..|   |              Block Height              |  |   
* 07|   ------------------------------------------  |   +128
* 08|   ------------------------------------------  |
* ..|   |       Transaction Height(16 bits)      |  |
* 08|   -----------------------------------------   |   +144
* ..|   ------------------------------------------  |
* ..|   |               Data(112 bits)              |
* 15|   ------------------------------------------  |   +256
* ================================================*/

Transaction::Transaction(std::string from, std::string to, float amount)
{
    m_FromAddress = from;
    m_ToAddress = to;
    m_Amount = amount;

    printf("\n---------------------- New Transaction ----------------------");
    printf("\nFrom: %s", m_FromAddress.c_str());
    printf("\nTo: %s", m_ToAddress.c_str());
    printf("\nAmount: %f", m_Amount);
}

Transaction::~Transaction()
{

}

void Transaction::SetTransactionId( int id )
{
    m_TransactionId = id;
}

int Transaction::GetTransactionId()
{
    return m_TransactionId;
}

std::string Transaction::GetFromAddress()
{
    return m_FromAddress;
}

std::string Transaction::GetToAddress()
{
    return m_ToAddress;
}

float Transaction::GetAmount()
{
    return m_Amount;
}