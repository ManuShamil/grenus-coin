#include <stdio.h>

#include "chain.hpp"

BlockChain::BlockChain( std::string blockChainName )
{
    m_BlockHeight = 0;
    m_BlockChainName = blockChainName;
}

BlockChain::~BlockChain()
{

}

void BlockChain::AddBlock( Block* block )
{
    m_Blocks.push_back( block );
    m_BlockHeight++;
}

Block* BlockChain::GetBlock( int blockId )
{
    return m_Blocks[ blockId ];
}

int BlockChain::GetHeight()
{
    return m_BlockHeight;
}

void BlockChain::DisplayStats()
{
    printf("\n---------------------- BlockChain Name: %s ---------------------- ", m_BlockChainName.c_str() );
    printf("\nNumber of Blocks: %d \n", m_BlockHeight);

    for (int i=0; i< m_BlockHeight; i++)
    {
        Block* block = GetBlock(i);
        
        printf(" -> %d", block -> GetBlockId() );
    }
}
