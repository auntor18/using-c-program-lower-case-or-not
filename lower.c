#include <stdio.h>

#include <ctype.h>

int main ()
{

    char  ch;

    printf("Enter a character:");

    scanf("%c",&ch);

    if(islower(ch))

        printf(" %c is a lower case",ch);

    else
        printf(" %c is not a lower case",ch);

    return 0;
}
