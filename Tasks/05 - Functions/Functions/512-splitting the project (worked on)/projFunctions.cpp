#include "projLibrary.h"

void displayVals(holdVal p) {
	cout << "Using Structure -> " << "(" << p.x << "," << p.y << "," << p.length << ")" << endl;

}

void calculateLength(holdVal& p) {
	float h = sqrt(p.x * p.x + p.y * p.y);
	p.length = h;
	cout << "The length of aforementioned structure is: " << p.length << endl;
	cout << "The structure should now look like this: " << "{" << p.x << ", " << p.y << ", " << p.length << "}" << endl << endl;
}

void flipVals(holdVal& p) {
	int prevX = p.x;
	p.x = p.y;
	p.y = prevX;
	cout << "Flipped ints -> " << "(" << p.x << "," << p.y << ")" << endl;
}

holdVal switchVals(holdVal& p) {
	p.x++;
	p.y++;
	p.length = 0;
	return p;
}

holdVal addVals(holdVal p1, holdVal p2) {
	holdVal newVals = { 0,0,0 };
	newVals.x = p1.x + p2.x;
	newVals.y = p1.y + p2.y;
	cout << "Combined values of both structures is: (" << newVals.x << "," << newVals.y << ")" << endl;
	calculateLength(newVals);
	return newVals;
}