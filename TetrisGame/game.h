#pragma once
#include "grid.h"
#include "blocks.cpp"

using std::vector;

class Game
{
private:
	vector<Block> blocks;
	Block currentBlock;
	Block nextBlock;

public:
	Game();
	Block GetRandomBlock();
	vector<Block> GetAllBlocks();
	void Draw();
	Grid grid;
};