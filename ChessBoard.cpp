/*
 *  ChessBoard.cpp
 *  KnightsTour
 *
 *  Created by arjun prakash on 1/25/11.
 *  Copyright 2011 devtown. All rights reserved.
 *
 */

#include "ChessBoard.h"

using namespace std;

//constructors and destrectures
ChessBoard::ChessBoard(int &x, int &y, int &size) {
	//setup board with inputs
	xSquares = x;
	ySquares = y;
	squareSize = size;
}
ChessBoard::ChessBoard() {
	//setup board with defaults
	xSquares = 8;
	ySquares = 8;
	squareSize = 1;
	initBoard();
}
ChessBoard::~ChessBoard() {
	//deallocation of grild
	//for(int i =0; i < xSquares; i++) {
	//		delete [] grid[i];
	//}
	//delete [] grid;
	
}

//initBoard method
void ChessBoard::initBoard() {
	//malloc array memory	
	grid =new int* [xSquares];
	for(int i=0;i<ySquares;i++)
		*(grid+i)=new int[ySquares];
	setBoard();
}

//setBoard method
void ChessBoard::setBoard() {
	//load array
	for (int i=0; i<xSquares; i++) {
		for (int j=0; j<ySquares; j++) {
			grid[i][j] = 0;
		}
	}
	//setup xRow
	xRows = new char[xSquares];
	for (int i=0; i<xSquares; i++) {
		xRows[i] = getLetter(i);
	}
	//setup yRow
	yRows = new int[ySquares];
	for (int i=0; i<ySquares; i++) {
		yRows[i] = (char)(i+1);
	}
	
}

//printBoad method
void ChessBoard::printBoard() {
	//board title
	cout << "CHESSBOARD BICHES!" << endl;
	//setup numbers and squares
	for (int i=xSquares-1; i>=0; i--) {
		for (int j=0; j<ySquares; j++) {
			if (j == 0) {
				cout << yRows[i] << " ";
			}
			cout << grid[j][i] << " ";
		}
		cout << endl;
	}
	//setup botton letters
	for (int i=0; i<xSquares; i++) {
		if (i == 0) {
			cout << "  ";
		}
		cout << xRows[i] << " ";
	}
	cout << endl << endl;
}

//moveToSpot method
void ChessBoard::moveToSpot(int x, int y) {
	grid[x][y] = 1;
	xMoved.push_back(x);
	yMoved.push_back(y);
}

//moveToCoordinate method
void ChessBoard::moveToCoordinate(Coordinate &theSpot){
	int x = theSpot.x;
	int y = theSpot.y;
	grid[x][y] = 1;
	xMoved.push_back(x);
	yMoved.push_back(y);


}

//listMoves method
void ChessBoard::listMoved() {
	for (int i=0; i<xMoved.size(); i++) {
		cout<<"move("<< i << ") " << getLetter(xMoved[i]) << " " << yMoved[i]+1 << endl;
	}
	cout << endl;
}

//checkCompleated method
bool ChessBoard::checkCompleated() {
	for (int i=0; i<xSquares; i++) {
		for (int j=0; j<ySquares; j++) {
			if ((grid[i][j])==0) {
				return false;
			}
		}
	}
	return true;
}
bool ChessBoard::checkSpot(int x, int y) {
	if ((grid[x][y]==1)) {
		return false;
	} else {
		return true;
	}

	//return false;

}
void ChessBoard::copyBoard(ChessBoard aBoard){
	//initBoard();
	for (int i=0; i<xSquares; i++) {
		for (int j=0; j<ySquares; j++) {
			if (!(aBoard.checkSpot(i, j))) {
				grid[i][j] = 1;
			}
		}
	}
	
	

}
//getLetter helper method
char ChessBoard::getLetter(int b) {
	
	return (char)(b+65);

}