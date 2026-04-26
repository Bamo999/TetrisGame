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
	bool IsBlockOutside();
	void RotateBlock();
	void LockBlock();
	bool BlockFits();
public:
	Grid grid;
	bool gameOver;
	Game();
	void Draw();
	void HandleInput();
	void MoveBlockLeft();
	void MoveBlockRight();
	void MoveBlockDown();
	Block GetRandomBlock();
	vector<Block> GetAllBlocks();
};