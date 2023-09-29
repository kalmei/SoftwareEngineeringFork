#include <stdio.h>
#include <iostream>
#include "comp1000utils.h"

int main()
{
	//Create and initialise a 16-bit variable
	unsigned short number = 0b0000000000001011;

	//Write to the terminal (using the tutors bespoke function)
	displayAndCompare(number);

	//Shift it left 1 bit position (binary operator)
	number = number << 1;
	displayAndCompare(number);

	//And again, only using the unary operator
	number <<= 1;
	displayAndCompare(number);

	//Shift left 2 bits
	number <<= 2;
	displayAndCompare(number);

	//Shift right 4 bits
	number >>= 4;
	displayAndCompare(number);

	//TASKS:

	//Shift right by 1 and display
	// value = 5??
	number >>= 1;
	displayAndCompare(number);


	//Shift left by 1 and display
	// value = 10??
	number <<= 1;
	displayAndCompare(number);

	// Task 3. THE LEAST SIGNIFICANT BIT WAS LOST. 
	//Task 3. Shifting right changes the binary from 01011 to 00101 which is 5 in decimal. 
	//        Shifting the same binary to the right does not recover the bit that was lost during the right shift resulting 
	//        the value to be 01010 which is 10 in decimal (each shift towards left is multiply by 2 and to the right is divide by 2).

}