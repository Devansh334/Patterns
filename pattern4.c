/*

Draw following pattern using Only 2 Loops
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
6 7 8 9 10

*/

#include <stdio.h>
void main()
{
    int i, j;
    int count = 0;

    for (i = 1; i <= 5; i++)
    {
        count = i + 1;
        for (j = 1; j <= 5; j++)
        {

            printf("%d ", count++);
        }
        printf("\n");
    }
}