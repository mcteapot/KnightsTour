#include <iostream>
#include <time.h>
#include <cstdlib>

#include "ChessBoard.h"
#include "Coordinate.h"
#include "Knight.h"

using namespace std;

int main (int argc, char * const argv[]) {
	srand((unsigned int)time(NULL));
	//int **grid;
	
	// get the starting position
		// x,y
    
	// prep the board
		//..initialize, link nodes
	
	//find knights tour
		//knightsGraph.findPath(x,y);
	
	//output that
	int boardBlock = 1;
	int boardSize = 8;
	Knight theKnight(boardSize);
	Coordinate aSpot(boardSize);
	ChessBoard board(boardSize, boardSize, boardBlock);
    board.initBoard();
	aSpot.printCoordinates();
	board.printBoard();

	//set init move
	theKnight.setCoordinates(1, 7, aSpot, board);
    aSpot.printCoordinates();
	board.printBoard();
	//first move
	theKnight.checkLegalMoves(aSpot, board);
	theKnight.printLegalSpots();
	theKnight.moveToRandomLegalSpot(aSpot, board);
	board.printBoard();
	//second move
	//TODO: fix the checking of spot
	theKnight.checkLegalMoves(aSpot, board);
	theKnight.printLegalSpots();
	theKnight.moveToRandomLegalSpot(aSpot, board);
	board.printBoard();
	//board.moveToCoordinate(aSpot);
	
	/*
	theKnight.setCoordinates(3, 5, aSpot);
	board.moveToCoordinate(aSpot);
    aSpot.printCoordinates();
	board.printBoard();
	
	theKnight.setCoordinates(2, 6, aSpot);
	board.moveToCoordinate(aSpot);
    aSpot.printCoordinates();
	board.printBoard();
	
	theKnight.setRandomCoordinates(aSpot);
	board.moveToCoordinate(aSpot);
    aSpot.printCoordinates();
	*/
	
	cout << "FINAL MOVES!\n";
	board.printBoard();
	board.listMoved();
	
	
	//cout << board.checkCompleated() << endl;
	cout << "Running!\n";
    return 0;
}
