/*
 *  Coordinate.h
 *  KnightsTour
 *
 *  Created by arjun prakash on 1/27/11.
 *  Copyright 2011 bellmonde. All rights reserved.
 *
 */

#ifndef COORDINATE
#define COORDINATE

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

class Coordinate {
public:
	Coordinate(int setX, int setY);
	Coordinate(int boardSize);
	Coordinate();
	~Coordinate();
	bool setCoordinate(int setX, int setY);
	void setBoardSize(int boardSize);
	int getX();
	int getY();
	bool getPositiongState();
	void printCoordinates();
	int x;
	int y;
	int boardSizeX;
	int boardSizeY;
	bool positionState;
};




#endif //COORDINATE