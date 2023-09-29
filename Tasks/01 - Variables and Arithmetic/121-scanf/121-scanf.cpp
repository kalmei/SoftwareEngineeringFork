#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;

    // T3. Second variable
    int y = 0;

    //Prompt user
    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%d", &x);

    // T3. Read in for second variable
    int second = scanf_s("%d", &y);

    //Display how many items were matched
    printf("Matched %d items\n", found);

    // T3. Second variable display
    printf("Matched %d items\n", second);

    //Display what was typed in
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    //Average (T3.)
    int a = (x + y) / 2;
    printf("The average is %d.\n", a);


}


