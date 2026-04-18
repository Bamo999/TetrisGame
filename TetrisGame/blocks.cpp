#pragma once

#include "block.h"
#include "position.h"

using Pos = Position;

class LBlock : public Block
{
public:
	LBlock() {
		id = 1;
		Move(0, 3);
		cells[0] =
		{
			Pos{0, 1},
			Pos{1, 0},
			Pos{1, 1},
			Pos{1, 2},
		};
		cells[1] =
		{
			Pos{0, 1},
			Pos{1, 1},
			Pos{2, 1},
			Pos{2, 2},
		};
		cells[2] =
		{
			Pos{1, 0},
			Pos{1, 1},
			Pos{1, 2},
			Pos{2, 0},
		};
		cells[3] =
		{
			Pos{0, 0},
			Pos{0, 1},
			Pos{1, 1},
			Pos{2, 1},
		};
	};
};

class JBlock : public Block {
public:
	JBlock() {
		id = 2;
		Move(0, 3);
		cells[0] = {
			Pos{0, 0},
			Pos{1, 0},
			Pos{1, 1},
			Pos{1, 2},
		};
		cells[1] = {
			Pos{0, 1},
			Pos{0, 2},
			Pos{1, 1},
			Pos{2, 1},
		};
		cells[1] = {
			Pos{1, 0},
			Pos{1, 1},
			Pos{1, 2},
			Pos{2, 2},
		};
		cells[1] = {
			Pos{0, 1},
			Pos{1, 1},
			Pos{2, 0},
			Pos{2, 1},
		};
	};
};

class IBlock : public Block {
public:
	IBlock() {
		id = 3;
		Move(-1, 3);
		cells[0] = {
			Pos{1, 0},
			Pos{1, 1},
			Pos{1, 2},
			Pos{1, 3},
		};
		cells[1] = {
			Pos{0, 2},
			Pos{1, 2},
			Pos{2, 2},
			Pos{3, 2},
		};
		cells[1] = {
			Pos{2, 0},
			Pos{2, 1},
			Pos{2, 2},
			Pos{2, 3},
		};
		cells[1] = {
			Pos{0, 1},
			Pos{1, 1},
			Pos{2, 1},
			Pos{3, 1},
		};
	};
};

class OBlock : public Block {
public:
	OBlock() {
		id = 4;
		Move(0, 4);
		cells[0] = {
			Pos{0, 0},
			Pos{0, 1},
			Pos{1, 0},
			Pos{1, 1},
		};
		cells[1] = {
			Pos{0, 0},
			Pos{0, 1},
			Pos{1, 0},
			Pos{1, 1},
		};
		cells[1] = {
			Pos{0, 0},
			Pos{0, 1},
			Pos{1, 0},
			Pos{1, 1},
		};
		cells[1] = {
			Pos{0, 0},
			Pos{0, 1},
			Pos{1, 0},
			Pos{1, 1},
		};
	};
};

class SBlock : public Block {
public:
	SBlock() {
		id = 5;
		Move(0, 3);
		cells[0] = {
			Pos{0, 1},
			Pos{0, 2},
			Pos{1, 0},
			Pos{1, 1},
		};
		cells[1] = {
			Pos{0, 1},
			Pos{1, 1},
			Pos{1, 2},
			Pos{2, 2},
		};
		cells[1] = {
			Pos{1, 1},
			Pos{1, 2},
			Pos{2, 0},
			Pos{2, 1},
		};
		cells[1] = {
			Pos{0, 0},
			Pos{1, 0},
			Pos{1, 1},
			Pos{2, 1},
		};
	};
};

class TBlock : public Block {
public:
	TBlock() {
		id = 6;
		Move(0, 3);
		cells[0] = {
			Pos{0, 1},
			Pos{1, 0},
			Pos{1, 1},
			Pos{1, 2},
		};
		cells[1] = {
			Pos{0, 1},
			Pos{1, 1},
			Pos{1, 2},
			Pos{2, 1},
		};
		cells[1] = {
			Pos{1, 0},
			Pos{1, 1},
			Pos{1, 2},
			Pos{2, 1},
		};
		cells[1] = {
			Pos{0, 1},
			Pos{1, 0},
			Pos{1, 1},
			Pos{2, 1},
		};
	};
};

class ZBlock : public Block {
public:
	ZBlock() {
		id = 7;
		Move(0, 3);
		cells[0] = {
			Pos{0, 0},
			Pos{0, 1},
			Pos{1, 1},
			Pos{1, 2},
		};
		cells[1] = {
			Pos{0, 2},
			Pos{1, 1},
			Pos{1, 2},
			Pos{2, 1},
		};
		cells[1] = {
			Pos{1, 0},
			Pos{1, 1},
			Pos{2, 1},
			Pos{2, 2},
		};
		cells[1] = {
			Pos{0, 1},
			Pos{1, 0},
			Pos{1, 1},
			Pos{2, 0},
		};
	};
};