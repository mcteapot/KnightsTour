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

using namespace std;

class Knight {
public:
	Knight(int boardSize);
	Knight();
	~Knight();
	
	void legalMove();
	void setCoordinates(int x,int y,Coordinate &theSpot);
	void setRandomCoordinates(Coordinate &theSpot);
	void printH();
	Coordinate setterCoordinates;
	int boardSize;

};




#endif //KNIGHT

