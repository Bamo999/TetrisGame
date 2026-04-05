
#include <iostream>
#include <vector>
#include <raylib.h>
#include "grid.h"
#include "colors.h"

using std::cout;
using std::endl;

Grid::Grid() {
	numRows = 20;
	numColumns = 10;
	cellSize = 30;
	Init();
	colors = GetCellColor();
};

void Grid::Init() {

	for (int row = 0; row < numRows; row++)
	{
		for (int column = 0; column < numColumns; column++)
		{
			grid[row][column] = 0;
		};
	};

}

void Grid::Print() {

	for (int row = 0; row < numRows; row++)
	{
		for (int column = 0; column < numColumns; column++)
		{
			cout << grid[row][column] << " ";
		};

		cout << endl;
	};

}

void Grid::Draw()
{
	for (int row = 0; row < numRows; row++)
	{
		for (int column = 0; column < numColumns; column++)
		{
			int cellValue = grid[row][column];
			DrawRectangle(
				column * cellSize + 1, 
				row * cellSize + 1, 
				cellSize - 2, 
				cellSize - 2, 
				colors[cellValue]
			);

		};

	};
};