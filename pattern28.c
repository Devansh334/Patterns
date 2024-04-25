/*
Draw following pattern using only 2 loops

@ @ @ @ @ !
@ @ @ @ ! @
@ @ @ ! @ @
@ @ ! @ @ @
@ ! @ @ @ @
! ! ! ! ! !

*/

#include <stdio.h>

void main()
{
    int i, j;

    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            if (i + j == 7 || i == 6)
            {
                printf("! ");
            }
            else
            {
                printf("@ ");
            }
        }
        printf("\n");
    }
}
