/*
Draw following using 2 loops

      *
        *
          *
* * * * * * *
          *
        *
      *
*/
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {

            if (i == 4 || (i <= 3 && j - i == 3) || (i >= 3 && i + j == 11))
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
