#include <iostream>
#include <time.h>
#include <cstdlib>

#include "ChessBoard.h"
#include "Coordinate.h"
#include "Knight.h"

using namespace std;

int main (int argc, char * const argv[]) {
	srand((unsigned int)time(NULL));
	//Setup
	bool keepMoving = true;
	int boardBlock = 1;
	int boardSize = 8;
	Knight theKnight(boardSize);
	Coordinate aSpot(boardSize);
	Coordinate moveSpot;
	ChessBoard board(boardSize, boardSize, boardBlock);
    board.initBoard();
	aSpot.printCoordinates();
	board.printBoard();

	//Set init move
	theKnight.setCoordinates(1, 7, aSpot, board);
    aSpot.printCoordinates();
	board.printBoard();

	while (keepMoving) {

	//First move
	theKnight.checkLegalMoves(aSpot, board);
	theKnight.printLegalSpots();
	moveSpot = theKnight.checkSecondLegalMoves(board);
	if ((moveSpot.getX() == -1)&&(moveSpot.getX() == -1)) {
		keepMoving = false;
	} else {
		aSpot = moveSpot;
		board.moveToCoordinate(aSpot);
	}
	board.printBoard();
	}	
	/*
	//second Move
	theKnight.checkLegalMoves(aSpot, board);
	theKnight.printLegalSpots();
	moveSpot = theKnight.checkSecondLegalMoves(board);
	if ((moveSpot.getX() == -1)&&(moveSpot.getX() == -1)) {
		keepMoving = false;
	} else {
		aSpot = moveSpot;
		board.moveToCoordinate(aSpot);
	}
	board.printBoard();
*/
	cout << "FINAL MOVES!\n";
	board.printBoard();
	board.listMoved();
	
	
	//cout << board.checkCompleated() << endl;
	cout << "Running!\n";
    return 0;
}
