#pragma once

class Grid 
{
private:
	Grid();
	void Init();
	void Print();
	int grid[20][10];
public:
	int numRows;
	int numColumns;
	int cellSize;
};