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
	vector<Color> colors;
public:
	int id;
	map < int, vector<Position> > cells;
	Block();
	void Draw();
};
