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
Knight::Knight(int theBoardSize) {
	boardSize = theBoardSize;
}
Knight::Knight() {
	
}
Knight::~Knight() {
	
}

void Knight::legalMove() {

}
void Knight::setCoordinates(int x,int y,Coordinate &theSpot) {
	
	setterCoordinates.x = x;
	setterCoordinates.y = y;
	theSpot = setterCoordinates;
}

void Knight::setRandomCoordinates(Coordinate &theSpot) { 
		
	setterCoordinates.x = (rand() % boardSize);
	setterCoordinates.y = (rand() % boardSize);
	theSpot = setterCoordinates;

}


void Knight::printH() {
	cout << "hello\n";
}

