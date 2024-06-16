// a story with variable name & story

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "hola Gupta";
    int characterAge = 101;
    printf("There was a girl name %s.\n", characterName);
    printf("She was %d years old.\n", characterAge);
    
    characterAge = 201; // Re-assigning the age to the variable characterAge
    printf("After 1 year her age was %d years.\n", characterAge);

    return 0;
}

