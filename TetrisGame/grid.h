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
	bool IsRowFull(int row);
	void ClearRow(int row);
	void MoveRowDown(int row, int numRows);
public:
	int grid[20][10];
	Grid();
	void Init();
	void Print();
	void Draw();
	bool IsCellEmpty(int row, int column);
	bool IsCellOutside(int row, int column);
	int ClearFullRows();
};