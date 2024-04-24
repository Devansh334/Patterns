/*
Draw following pattern
      D
     D E
    D E V
   D E V A
  D E V A N
 D E V A N S
D E V A N S H

*/
#include <stdio.h>

void main()
{
    int i, j, k;

    char arr[7] = {'D', 'E', 'V', 'A', 'N', 'S', 'H'};

    for (i = 1; i <= 7; i++)
    {
        for (j = 7; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 0; k <= i - 1; k++)
        {
            printf("%c ", arr[k]);
        }
        printf("\n");
    }
}
