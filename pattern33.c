/*

Draw following pattern using only 2 loops

1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3

*/

#include <stdio.h>

void main()
{
    int i, j;
    int temp;

    for (i = 1; i <= 4; i++)
    {

        temp = i;
        for (j = 1; j <= 4; j++)
        {
            printf("%d ", temp++);
            if (temp > 4)
            {
                temp = 1;
            }
        }
        
        printf("\n");
    }
}
