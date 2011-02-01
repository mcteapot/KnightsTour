/*
 *  Coordinate.cpp
 *  KnightsTour
 *
 *  Created by arjun prakash on 1/27/11.
 *  Copyright 2011 bellmonde. All rights reserved.
 *
 */

#include "Coordinate.h"
Coordinate::Coordinate(int setX, int setY) {
	x = setX;
	y = setY;
}
Coordinate::Coordinate(int boardSize){
	if (boardSize) {
		boardSizeX = boardSize;
		boardSizeY = boardSize;
	}


}
Coordinate::Coordinate(){
	x = 0;
	y = 0;
}
Coordinate::~Coordinate(){ 

}

bool Coordinate::setCoordinate(int setX, int setY) {
	if ((setX >= 0 && setX < boardSizeX) && (setY >=0 && setY < boardSizeY)) {
		x = setX;
		y = setY;
		return (positionState = true);		
	}
	else {
		x = NULL;
		y = NULL;
		return (positionState = false);
	}


	
}

void Coordinate::setBoardSize(int boardSize) {
	boardSizeX = boardSize;
	boardSizeY = boardSize;


}
int Coordinate::getX() {
	return x;
}	
int Coordinate::getY() {
	return y;
}
bool Coordinate::getPositiongState() {
	return positionState;
}
void Coordinate::printCoordinates() {
	cout << "x:" << x << " y:" << y << endl;
}
