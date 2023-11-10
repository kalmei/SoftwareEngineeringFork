#pragma once
#include <iostream>
#include <math.h>
using namespace std;

struct holdVal {

	int x;
	int y;
	float length;
};

void displayVals(holdVal p);
void calculateLength(holdVal& p);
void flipVals(holdVal& p);
holdVal addVals(holdVal p1, holdVal p2);
holdVal switchVals(holdVal p);
