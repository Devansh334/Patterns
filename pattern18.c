/*

Draw following pattern using only 2 loops
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        int temp = i;
        for (j = 5; j >= i; j--)
        {
            printf("%d ", temp++);
        }
        printf("\n");
    }
}
