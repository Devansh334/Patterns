/*
Draw following pattern using only 2 loops

p
q p
r q p
s r q p
t s r q p

*/

#include <stdio.h>
void main()
{
    int i, j;
    int p = 112;

    for (i = 1; i <= 5; i++)
    {
        int temp = p + i - 1;
        for (j = 1; j <= i; j++)
        {
            printf("%c ", temp--);
        }
        printf("\n");
    }
}
