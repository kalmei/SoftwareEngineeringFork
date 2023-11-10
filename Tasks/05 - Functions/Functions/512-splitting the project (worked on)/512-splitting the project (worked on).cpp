#include "projLibrary.h"


int main() {

	holdVal H1 = {6, 8, 0.0f};
	displayVals(H1);
	flipVals(H1);
	calculateLength(H1);

	holdVal H2 = switchVals(H1);

	displayVals(H2);
	flipVals(H2);
	calculateLength(H2);

	
	holdVal H3 = addVals(H1, H2);
	

	return 0;

}

// Q1) addVals function not working properly, unable to understand why the arithmetic is incorrect.
// A1) suspected error is placement of codes. in main or maybe in the functions source files. 
// A1) SUSPECTED ERROR INCORRECT 
// A1) True error ---> switchVals func. was passed as a REFERNCE causing it to modify H1 resulting in addVals providing (16,16) addVals works fine. 
// A1) prevention: create a new structure do not pass a refernce. 
