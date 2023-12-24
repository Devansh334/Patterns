/*

Draw following pattern using only two loops

* * * * *
* * * *
* * *
* *
*
* *
* * *
* * * *
* * * * *

*/

#include <stdio.h>
void main()
{
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i + j <= 6 || i - j >= 4)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}