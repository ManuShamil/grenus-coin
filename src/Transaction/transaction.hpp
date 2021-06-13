#include <string>

class Transaction
{
    int m_BlockHeight;
    int m_TransactionId;
    std::string m_FromAddress;
    std::string m_ToAddress;
    float m_Amount;

    public:
        Transaction( std::string from, std::string to, float amount );
        virtual ~Transaction();
        virtual void SetTransactionId( int id );
        virtual int GetTransactionId();
        virtual std::string GetFromAddress();
        virtual std::string GetToAddress();
        virtual float GetAmount();
};