
#pragma once

#include <iostream>
#include <Windows.h>
#include <string>
#include <ctime>
#include <math.h>
#include <time.h>

enum input { LEFT, RIGHT, NONE, RESTART, END, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN };
enum piece { I, O, T, S, Z, J, L, ACTIVE, BLANK };

struct tile {
	bool enabled;
	bool active;
	piece ID;

	tile() : enabled(0), active(0), ID(BLANK) { }
	tile(bool a, bool b, piece c) : enabled(a), active(b), ID(c) { }
};

unsigned short randColor();
unsigned short idToColor(int);
void makeFullPiece(piece, int, int, int);		// makeFullPiece(pieceType, posx, posy, rotation)
void deleteFullPiece(piece, int, int, int);
void printUpdatedGrid();
void printFullGrid();
void showConsoleCursor(bool);
void drawBox(int, int);
void eraseBox(int, int);
void setCursorPos(int, int);
void setConsoleColor(unsigned short);
void updateGrid();
void createPiece(piece);
void setNextGrid();
void setPiece();
void drawBoundaries();
void updateText();
void drawHoldingPiece(piece, piece, int, int);
void drawHoldingBox();
void drawQueueBox();
void makePiece(int, int, piece);
void deletePiece(int, int);
void rotatePieceCW();
void rotatePieceCCW();
void cls();
void resetInput();
void movePieceRight();
void movePieceLeft();

bool getInput(input*);
bool checkIfPieceFits(piece, int, int, int);	// checkIfPiecefits(pieceType, posx, posy, roation) function
piece randomPiece();

