#pragma once
#include "grid.h"
#include "block.cpp"

using std::vector;

class Game
{
private:
	vector<Block> block;

public:
	Game();
	Grid grid;
};