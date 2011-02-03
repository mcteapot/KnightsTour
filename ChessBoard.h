/*
 *  ChessBoard.h
 *  KnightsTour
 *
 *  Created by arjun prakash on 1/25/11.
 *  Copyright 2011 bellmonde. All rights reserved.
 *
 */

#ifndef CHESSBOARD
#define CHESSBOARD

#include <iostream>
#include <vector>
#include "Coordinate.h"

using namespace std;

class ChessBoard {
public:
	ChessBoard(int &x, int &y, int &size);
	ChessBoard();
	~ChessBoard();
	void initBoard();
	void printBoard();
	void moveToSpot(int x, int y);
	void moveToCoordinate(Coordinate &theSpot);
	void listMoved();
	bool checkCompleated();
	void copyBoard(ChessBoard aBoard);
	bool checkSpot(int x, int y);
private:
	
	int xSquares;
	int ySquares;
	int squareSize;
	int **grid;
	char *xRows;
	int *yRows;
	vector<int> xMoved;
	vector<int> yMoved;
	void setBoard();
	char getLetter(int b);
};




#endif //CHESSBOARD