#include <stdio.h>
#include "../../comp1000/comp1000utils.h"

int main()
{
	//Read the terminal input
	unsigned char c = 0b10101100;
	displayAndCompare(c);

	//Shift left 56 bits and store in a 64bit variable
	//
	//We expect the output to be 0b10101100 00000000 00000000 00000000 00000000 00000000 00000000 00000000
	unsigned long long x = c << 56;          // T3. change line to unsigned long long x = (unsigned long long)c << 56; 
											 //     to get the right answer. The cause of error is c is assigned as a char which cannot 
											 //     hold a number that large after shifting. Hence the char needs to be typecasted with an
											 //     unsigned long long so that the value can be temporarily stored in c safely without
										     //     causing overflow before it is moved into x. 
	
	displayAndCompare(x);

	//Solution is in the lab notes

	//This also needs fixing
	int p = 123;
	int q = 2;
	double y = p / q;						// The result will be rounded due to integer division, 
											// to obtain precise value use the typecasted line code below.
											// double y = (double)p / (double)q;
	printf("y = %f\n", y);
}
