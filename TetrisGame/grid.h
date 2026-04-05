#pragma once
#include <vector>
#include <raylib.h>

using std::vector;

class Grid 
{
private:
	int numRows;
	int numColumns;
	int cellSize;
	vector<Color> colors;
public:
	Grid();
	void Init();
	void Print();
	void Draw();
	int grid[20][10];
};