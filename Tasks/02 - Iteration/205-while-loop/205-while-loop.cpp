#include <stdio.h>

int main()
{   // modified for task 6
    int i = 10;

    puts("Start while loop");

    while (i >= 0)
    {
        printf("i = %d\n", i);
        i--;        // same as i = i + 1 but more concise;
    }

    printf("Exiting with i=%d\n", i);
}

