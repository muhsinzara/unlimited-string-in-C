#include "stdio.h" //required
#include "stdlib.h" //required

#include "usic.c"

int main()
{
    printf("Enter a string: ");
    char *userInput = getUS();
    if (userInput)
    {
        printf("You entered: %s\n", userInput);
        free(userInput); //free space
    }
    return 0;
}
