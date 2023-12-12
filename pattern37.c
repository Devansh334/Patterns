/*
Draw following using 2 loops

7 7 7 7 7 7 7
          7
        7
      7
    7
  7
7

*/
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 7; j >= i; j--)
        {

            if (i == j || i == 1)
            {
                printf("7 ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}