/*Input number of rows: 5  
pascal triangle.                                                                                     
             1                                                                                                
           1   1                                                                                              
         1   2   1                                                                                            
       1   3   3   1                                                                                          
     1   4   6   4   1 */

    #include<stdio.h>
    void main(){
int num,c=1;
        printf("Input number of rows:");
        scanf("%d",&num);
        for (int row = 0; row<num; row++)
        {
          for (int sp = num; sp > row; sp--)
          
            printf(" ");
            for (int col = 0; col<=row; col++)
            
                if(col==0)
                {
                c=1;
               printf("%d ",c);
                }
                else
                {
                    c=c*(row-col+1)/col;
               printf("%d ",c);
                }
          
          printf("\n");
        }
        

    }