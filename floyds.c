#include <stdio.h>
void main()
{
    int i = 0,j=1;

    for (int row = 1; row <= 5; row++)
    {  
        if(row%2==0){
            i=1;
            j=0;
        }else{
            i=0;
            j=1;
        }
        
        for (int col = 1; col <= row; col++)
        {
           if(col%2==0) 
            printf("%d",i);
            else
            printf("%d",j);

        }
       
        printf("\n");
    }
}