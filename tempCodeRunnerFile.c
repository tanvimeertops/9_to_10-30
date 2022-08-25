#include <stdio.h>
void main()
{
    int i = 1;

    for (int row = 0; row <= 4; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            printf("%d ",i);
            i= !i;
            // 1
            // 01
            // 101
            // 0101
            // 10101

        }
        i =row%2 ; 
        printf("\n");
    }
}