#pragma once

#include "block.h"
#include "position.h"

using Pos = Position;

class LBlock: public Block
{
public:
	LBlock() {
		id = 1;
		cells[0] =
		{
			Pos{0, 2},
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
		cells[0] = {
			Pos{0, 1},
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