/*

Draw following pattern using only 2 loops

A B C D
E F G H
I J K L
M N O P

*/

#include <stdio.h>

void main()
{
    int i, j;
    char x = 'A';

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            printf("%c ", x++);
        }
        printf("\n");
    }
}