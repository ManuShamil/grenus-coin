#include <vector>
#include "../Block/block.hpp"

class BlockChain
{
    int m_BlockHeight;
    std::string m_BlockChainName;
    std::vector<Block*> m_Blocks;

    public:
        BlockChain( std::string blockChainName );
        virtual ~BlockChain();
        virtual void AddBlock(Block* block);
        virtual Block* GetBlock(int blockId);
        virtual int GetHeight();
        virtual void DisplayStats();
};