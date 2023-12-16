/*

Draw following pattern using only 2 loops

      *
    *
  *
* * * * * * * *
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
        for (j = 1; j <= 8; j++)
        {
            if (i == 4 || (i + j == 5) || (i - j == 3))
                printf("* ");
            else
                printf("  ", j);
        }
        printf("\n");
    }
}
