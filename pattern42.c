/*
Draw following using loops

    1
   222
  33333
 4444444
555555555

*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 9; i += 2)
    {
        for (int k = 3; k >= i / 2; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", i / 2 + 1);
        }
        printf("\n");
    }
}