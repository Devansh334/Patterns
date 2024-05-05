/*
Draw following pattern using only 2 loops

0
1 1
2 3 5
8 13 21 34
*/

#include <stdio.h>

void main()
{
    int i, j;
    static int f, a = -1, b = 1;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            f = a + b;
            printf("%d ", f);
            a = b;
            b = f;
        }
        printf("\n");
    }
}
