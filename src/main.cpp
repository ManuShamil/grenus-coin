#include <stdio.h>
#include <iostream>
#include "Chain\chain.hpp"

int main()
{
    BlockChain *myBlockChain = new BlockChain( "Grenus Coin" );

    int blockHeight = myBlockChain->GetHeight();

    Block *newBlock = new Block( blockHeight );

    newBlock -> AddTransaction( new Transaction( "0x1", "0x2", 0.0 ) );
    newBlock -> AddTransaction( new Transaction( "0x1", "0x2", 0.0 ) );
    newBlock -> AddTransaction( new Transaction( "0x1", "0x2", 0.0 ) );

    myBlockChain -> AddBlock( newBlock );


    myBlockChain -> DisplayStats();
    newBlock -> DisplayStats();



    return 1;
}