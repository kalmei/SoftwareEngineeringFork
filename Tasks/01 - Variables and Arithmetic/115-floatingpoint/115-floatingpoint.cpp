#include <stdio.h>

int main()
{
    float fFractional = 0.123;
    printf("fFractional = %f\n", fFractional);            // T4. Value was accurately stored. 

    //To 6 decimal places
    printf("fFractional (6dp) = %.6f\n", fFractional);    //T4.  Value was accurately stored.

    //Let's try 9 decimal places 
    fFractional = 0.123456789;
    printf("fFractional = %.9f\n", fFractional);          // T4. Could not store in float without error. reason: limited precision.
                                                          //     accurate upto 7 decimal places.

    //Compare with double
    double dfFractional = 0.123456789;
    printf("dfFractional = %.9f\n", dfFractional);       // T4. Value was accurately stored. 

    //Push double further into the smaller fractions (18 decimal places)
    dfFractional = 0.123456789123456789;
    printf("dfFractional = %.18f\n", dfFractional);      // T4. Could not store in double without error. reason: limited precision.
                                                         //     accurate upto 17 decimal places.

    //Push double further into the large numbers (9 decimal places)
    dfFractional = 10000000000.123456789;
    printf("dfFractional = %.9f\n", dfFractional);       // T4. Could not store in double without error. reason: limited precision.
                                                         //     accurate upto 7 decimal places due to unlike line 22 
                                                         //     because of the whole number 10000000000.

    //Caluclations
    double x = 1.234;
    printf("x = %f\n", x);                              // T4. Value was stored upto 6 decimal places 1.234000

    //Multiply
    x = x * 10.0;                                       
    printf("x = %f\n", x);                             // T4. multiplication successful and retains 6 decimal places. output = 12.340000

    //Divide
    x = x / 0.0;      //Error!!!!????
    printf("x = %f\n", x);                             // T4. Value results in Infinity unlike int calculations in 109 float
                                                       //     calculations do not crash providing inf as the answer.

}


