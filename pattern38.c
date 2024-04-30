/*
Draw following using 2 loops

Z Z Z Z Z Z Z
          Z
        Z
      Z
    Z
  Z
Z Z Z Z Z Z Z
*/
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {

            if (i + j == 8 || i == 1 || i == 7)
            {
                printf("Z ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
