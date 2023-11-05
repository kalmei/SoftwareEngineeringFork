#include "API.h"



int addVal(int a, int b) {
	int result = a + b;
	cout << "Upon addition we get: " << a << " + " << b << " = " << result << endl;
	return result;
}

int subVal(int a, int b) {
	int result = 0;
	if (b > a) {
		 result = b - a;
		 cout << "Upon subtraction we get: " << b << " - " << a << " = " << result << endl;
	}
	else {
		 result = a - b;
		 cout << "Upon subtraction we get: " << a << " - " << b << " = " << result << endl;
	}
	
	return result;
}

int mulVal(int a, int b) {
	int result = a * b;
	cout << "Upon multilication we get: " << a << " * " << b << " = " << result << endl;
	return result;
}

float divVal(int a, int b) {
	float result = 0.0f;
	if (b > a) {
		float result = (float)a / (float)b;
		cout << "Upon division we get: " << b << " / " << a << " = " << result << endl << endl;
	}
	else {
		float result = (float)a / (float)b;
		cout << "Upon division we get: " << a << " / " << b << " = " << result << endl << endl;
	}
	return result;
}

void flipVal(int& a, int& b) {
	int preVal = b;
	b = a;
	a = preVal;
}

void displayVal(int a, int b) {
	cout << "Using int values: (" << a << ", " << b << ")" << endl;
}



// Q1) In subtraction, to store the answer would the use of "unsigned int" be required if no if/else statements are used to reorder the 
//	   arithmetic such that greatest value is used first?
// A2) 





