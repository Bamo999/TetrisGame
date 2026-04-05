
#include "block.h"

Block::Block() 
{
	cellSize = 30;
	rotationState = 0;
	colors = GetCellColor();
	id = 0;
}

void Block::Draw() 
{
	vector<Position> tiles = cells[rotationState];

	for (Position item : tiles) 
	{
		DrawRectangle(
			item.column * cellSize + 1,
			item.row * cellSize + 1,
			cellSize - 1,
			cellSize - 1,
			colors[id]
		);
	}
}