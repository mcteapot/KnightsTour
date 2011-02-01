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
	x = (rand() % boardSize);
	y = (rand() % boardSize);
}
Coordinate::Coordinate(){
	x = 0;
	y = 0;
}
Coordinate::~Coordinate(){ 

}

void Coordinate::setCoordinate(int setX, int setY) {
	x = setX;
	y = setY;
	
}
void Coordinate::printCoordinates() {
	cout << "x:" << x << " y:" << y << endl;
}
