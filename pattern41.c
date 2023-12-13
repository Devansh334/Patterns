/*
Draw following using loops

    1
   123
  12345
 1234567
123456789

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
            printf("%d", j);
        }
        printf("\n");
    }
}