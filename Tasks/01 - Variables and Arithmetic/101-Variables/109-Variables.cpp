#include <stdio.h>

int main()
{ // Block opening brace

	char c = 88;										// Character (1 byte)
	//short year = 2023;								// original line of code 
	unsigned short year = 2023;							// T5. switch to unsigned short year = 2023;
	int age = 23;										// Integer
	long bigNumber = 123456789;							// Long integer
	long long veryBigNumber = 1LL << 30;				//2^30 - challenge (advanced), why have I put 1LL?

	printf("c=%d\n", c);
	printf("year = %hd\n", year);
	printf("age = %d\n", age);
	printf("bigNumber = %ld\n", bigNumber);
	printf("veryBigNumber = %lld\n", veryBigNumber);

	//Addition
	int ageNextYear;
	ageNextYear = age + 1;
	printf("Next birthday, you will be %d\n", ageNextYear);

	//Increment
	ageNextYear++;
	printf("And then after that, you will be %d\n", ageNextYear);

	//Overflow
	year = 65535;
	year = year + 1;							// T4. turns negative due to syntax used causing overflow and the 
												//     value loops around starting from the minimum.
	// year = 32767;							//( original line of code)
	// year = year + 1;							//( original line of code)
	// printf("year = %d\n", year);				//( original line of code)
	printf("year = %u\n", year);				//T6.unsinged short provides correct value.

												//T7. data type short can hold upto 16 bit values 
												//    adding 1 results an integer over 16 bits and generates the output value 0.
												
												// T8. data type short is for 16 bit 
												//     and cannot hold the above value since it exceeds 16 bits.
	
	//Divide
	age = 50;
	age = age / 2;								// T3. changing 2 to 0 results in the error 'exception unhandled'.
	printf("Half of 50 is %d\n", age);
	 
	//Divide and remainder
	age = 51;
	age = age / 2;
	int remainder = age % 2;
	printf("Half of 51 is %d, remainder %d\n", age, remainder);

} 