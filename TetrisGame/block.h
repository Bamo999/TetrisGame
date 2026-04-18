#pragma once

#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

using std::vector;
using std::map;

class Block 
{
private:
	int cellSize;
	int rotationState;
	int rowOffset;
	int columnOffset;
	vector<Color> colors;
public:
	int id;
	map < int, vector<Position> > cells;
	Block();
	void Draw();
	void Move(int rows, int column);
	void Rotate();
	void UndoRotation();
	vector<Position> GetCellPositions();
};
