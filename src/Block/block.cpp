#include <stdio.h>
#include "block.hpp"

Block::Block( int blockHeight )
{
    m_BlockId = blockHeight;
    m_TransactionCount = 0;
}

Block::~Block()
{
    
}

int Block::GetBlockId()
{
    return m_BlockId;
}

void Block::AddTransaction( Transaction *transaction )
{
    transaction->SetTransactionId( m_TransactionCount );

    m_Transactions.push_back( transaction );
    m_TransactionCount++;
}


Transaction* Block::GetTransaction( int transactionId )
{
    return m_Transactions[ transactionId ];
}

void Block::DisplayStats()
{
    printf("\n---------------------- Block #%d Stats ----------------------", m_BlockId);
    printf("\nTransaction Count: %d\n", m_TransactionCount);
    for (int i=0; i<m_TransactionCount; i++)
    {
        Transaction *tx = m_Transactions[i];
        printf("-> %d ", tx -> GetTransactionId());
    }
}