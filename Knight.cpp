/*
 *  Knight.cpp
 *  KnightsTour
 *
 *  Created by arjun prakash on 1/26/11.
 *  Copyright 2011 devtown. All rights reserved.
 *
 */

#include "Knight.h"

using namespace std;

//constructors and destrectures
Knight::Knight(int theBoardSize) {
	boardSize = theBoardSize;
	legalMoveNumber = new int[theBoardSize];
	possibleCoordinates = new Coordinate[boardSize];
	possibleMoves = -1;
	legalMovesChecked = false;
}
Knight::Knight() {
	
}
Knight::~Knight() {
	
}

//legalMove method
void Knight::checkLegalMoves(Coordinate &aSpot,ChessBoard &grid) {
	//setup cordinates for poisble moves
	if (boardSize && !legalMovesChecked) {
		for (int i=1; i<boardSize; i++) {
			possibleCoordinates[i].setBoardSize(boardSize);
			possibleCoordinates[i].setCoordinate(-1, -1);
			legalMoveNumber[i] = -1;
		}
		//check moves
		//move 0
		if(possibleCoordinates[0].setCoordinate(((aSpot.getX())+1), ((aSpot.getY())+2))) {
			if (grid.checkSpot(((aSpot.getX())+1), ((aSpot.getY())+2))) {
				possibleMoves ++;
				legalMoveNumber[possibleMoves] = 0;
			}
		}
		//move 1
		if(possibleCoordinates[1].setCoordinate(((aSpot.getX())-1), ((aSpot.getY())+2))) {
			if (grid.checkSpot(((aSpot.getX())-1), ((aSpot.getY())+2))) {
				possibleMoves ++;
				legalMoveNumber[possibleMoves] = 1;
			}
		}
		//move 2
		if(possibleCoordinates[2].setCoordinate(((aSpot.getX())-2), ((aSpot.getY())+1))) {
			if (grid.checkSpot(((aSpot.getX())-2), ((aSpot.getY())+1))) {
				possibleMoves ++;
				legalMoveNumber[possibleMoves] = 2;
			}
		}
		//move 3
		if(possibleCoordinates[3].setCoordinate(((aSpot.getX())-2), ((aSpot.getY())-1))) {
			if (grid.checkSpot(((aSpot.getX())-2), ((aSpot.getY())-1))) {
				possibleMoves ++;
				legalMoveNumber[possibleMoves] = 3;
			}
		}
		//move 4
		if(possibleCoordinates[4].setCoordinate(((aSpot.getX())+1), ((aSpot.getY())-2))) {
			if (grid.checkSpot(((aSpot.getX())+1), ((aSpot.getY())-2))) {
				possibleMoves ++;
				legalMoveNumber[possibleMoves] = 4;
			}
		}
		//move 5
		if(possibleCoordinates[5].setCoordinate(((aSpot.getX())-1), ((aSpot.getY())-2))) {
			if (grid.checkSpot(((aSpot.getX())-1), ((aSpot.getY())-2))) {
				possibleMoves ++;
				legalMoveNumber[possibleMoves] = 5;
			}
		}
		//move 6
		if(possibleCoordinates[6].setCoordinate(((aSpot.getX())+2), ((aSpot.getY())+1))) {
			if (grid.checkSpot(((aSpot.getX())+2), ((aSpot.getY())+1))) {
				possibleMoves ++;
				legalMoveNumber[possibleMoves] = 6;
			}
		}
		//move 7
		if(possibleCoordinates[7].setCoordinate(((aSpot.getX())+2), ((aSpot.getY())-1))) {
			if (grid.checkSpot(((aSpot.getX())+2), ((aSpot.getY())-1))) {
				possibleMoves ++;
				legalMoveNumber[possibleMoves] = 7;
			}
		}
		legalMovesChecked = true;	
	}


	
}

//moveToRandomLegalSpot method
void Knight::moveToRandomLegalSpot(Coordinate &aSpot, ChessBoard &theGrid) {

	if (legalMovesChecked) {
		int randomMove = legalMoveNumber[(rand() % (possibleMoves+1))];
		switch (randomMove) {
			case 0:
				setCoordinates(possibleCoordinates[randomMove].getX(), possibleCoordinates[randomMove].getY(), aSpot, theGrid);
				break;
			case 1:
				setCoordinates(possibleCoordinates[randomMove].getX(), possibleCoordinates[randomMove].getY(), aSpot, theGrid);
				break;
			case 2:
				setCoordinates(possibleCoordinates[randomMove].getX(), possibleCoordinates[randomMove].getY(), aSpot, theGrid);
				break;
			case 3:
				setCoordinates(possibleCoordinates[randomMove].getX(), possibleCoordinates[randomMove].getY(), aSpot, theGrid);
				break;
			case 4:
				setCoordinates(possibleCoordinates[randomMove].getX(), possibleCoordinates[randomMove].getY(), aSpot, theGrid);
				break;
			case 5:
				setCoordinates(possibleCoordinates[randomMove].getX(), possibleCoordinates[randomMove].getY(), aSpot, theGrid);
				break;
			case 6:
				setCoordinates(possibleCoordinates[randomMove].getX(), possibleCoordinates[randomMove].getY(), aSpot, theGrid);
				break;
			case 7:
				setCoordinates(possibleCoordinates[randomMove].getX(), possibleCoordinates[randomMove].getY(), aSpot, theGrid);
				break;
			default:
				break;
		}
		
		possibleMoves = -1;
		legalMovesChecked = false;
	}

}

//printLegalSpots method
void Knight::printLegalSpots() {
	if (legalMovesChecked) {
		for (int i=0; i<boardSize; i++) {
			cout<<"Move" << i << " PositionState: "<< possibleCoordinates[i].getPositiongState() 
			<< " x:" << possibleCoordinates[i].getX() 
			<< " y:" << possibleCoordinates[i].getY() 
			<< endl << endl;
			
		}
		cout << "possibleMoves" << (possibleMoves+1) << endl;
		for (int i=0; i<=possibleMoves; i++) {
			cout << "move" << i << ": " << legalMoveNumber[i] << endl;
		}
		cout << "legalMovesChecked: " << legalMovesChecked << endl;
		cout << endl;
	}
}

//setCoordinates method
void Knight::setCoordinates(int x,int y,Coordinate &theSpot, ChessBoard &theGrid) {
	
	setterCoordinates.x = x;
	setterCoordinates.y = y;
	theSpot = setterCoordinates;
	theGrid.moveToCoordinate(theSpot);
}

//setRandomCoordinates method
void Knight::setRandomCoordinates(Coordinate &theSpot) { 
		
	setterCoordinates.x = (rand() % boardSize);
	setterCoordinates.y = (rand() % boardSize);
	theSpot = setterCoordinates;

}

//printH method
void Knight::printH() {
	cout << "hello\n";
}

