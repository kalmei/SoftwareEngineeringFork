#include <stdio.h>

int main()
{   // modifed for task 5 and used boolean variables.
    puts("Press a letter or number, then press return");
    puts("Press q then return to quit");

    char userEnteredCharacter;
    char returnKey;
    bool exitCondition;

    do
    {
        userEnteredCharacter = getchar();   //ASCII character
        returnKey = getchar();              //Return key
        printf("You typed %c\n", userEnteredCharacter);
        printf("You also pressed return (ASCII %d)\n", returnKey);    //Uncomment this
        exitCondition = ((userEnteredCharacter == 'q') || (userEnteredCharacter == 'Q'));

    } while (!exitCondition); //while ((userEnteredCharacter != 'q') && (userEnteredCharacter != 'Q'));           //Repeat if condition is met - note the != operator

    puts("Finished");
}
