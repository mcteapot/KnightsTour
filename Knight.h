/*
 *  Knight.h
 *  KnightsTour
 *
 *  Created by arjun prakash on 1/26/11.
 *  Copyright 2011 bellmonde. All rights reserved.
 *
 */

#ifndef KNIGHT
#define KNIGHT

#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Coordinate.h"
#include "ChessBoard.h"

using namespace std;

class Knight {
public:
	Knight(int boardSize);
	Knight();
	~Knight();
	
	void checkLegalMoves(Coordinate &aSpot, ChessBoard &grid);
	void moveToRandomLegalSpot(Coordinate &aSpot, ChessBoard &theGrid);
	void setCoordinates(int x,int y,Coordinate &theSpot, ChessBoard &theGrid);
	void setRandomCoordinates(Coordinate &theSpot);
	Coordinate checkSecondLegalMoves(ChessBoard grid);
	void printLegalSpots();
	void knightMoves();
	void printH();
	Coordinate setterCoordinates;
	int boardSize;
	Coordinate *possibleCoordinates;
	//Coordinate *possibleMove;
	int *legalMoveNumber;
	int possibleMoves;
	bool legalMovesChecked;

};




#endif //KNIGHT

