/*

Draw following pattern using only 2 loops

*
* *
* * *
* * * *
* * * * * * * * *
          * * * *
            * * *
              * *
                *
*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if ((j - i <= 0 && i <= 5) || (j - i >= 0 && i >= 5))
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