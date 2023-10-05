#include <stdio.h>

int main()
{   // modified for challenge
    int i = 5;

    printf("Start while loop\n");

    do
    {
        printf("i = %d\n", i);
        i = i - 1;              // Alternatively, write i++;
    } while (i >= 0);            //Repeat if condition is met

    printf("Finished: i = %d\n", i); // the loop repeats 5 times with final value i= 5. 
    //when i = 6 the loop condition is not met and the increment occurs once before exiting code.
                                        
}


