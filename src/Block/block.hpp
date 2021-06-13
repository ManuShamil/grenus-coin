#include <vector>

#include "../Transaction/Transaction.hpp"

class Block
{
    int m_BlockId;
    std::vector<Transaction*> m_Transactions;
    int m_TransactionCount;
    public:
        Block( int blockHeight );
        virtual ~Block();
        virtual int GetBlockId();
        virtual void AddTransaction( Transaction *transaction );
        virtual Transaction* GetTransaction( int transactionId );
        virtual void DisplayStats();
};