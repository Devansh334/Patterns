/*

Draw following pattern using only 2 loops

1 2 3 4 5
A A A A A
1 2 3 4 5
A A A A A
1 2 3 4 5

*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i % 2 == 0)
                printf("A ");
            else
                printf("%d ", j);
        }
        printf("\n");
    }
}
