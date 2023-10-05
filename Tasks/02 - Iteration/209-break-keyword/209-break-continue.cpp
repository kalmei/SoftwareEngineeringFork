#include <stdio.h>

int main()
{
    bool quitEarly = false;
    for (int i = 0; true; i++)
    //for (int i = 0; i <=10; i++)   // potentially loop from 1 to 10  
    {
        char c = getchar(); //Read character
        char r = getchar(); //Read and discard newline (nice little hack :)

        if ((c == 'q') || (c == 'Q') || (r == 'q') || (r == 'Q'))
        {
            printf("\tUser stopped the loop early at %d\n", i);
            quitEarly = true;
            break;                  // break out of the for loop
        }
        printf("Loop counter = %d\n", i);
        
    }
    if (quitEarly == true)
    {
        puts("The loop was exited early\n");
    }
    puts("Done");
}
