/*Array is collection of data of similar type.
Array will always start from 0
types of array:
1. 1-D (dimension)
2. 2-D (matrix) 
*/
/*addition,substraction,multiplication of matrix.
+,-,*
*/
//array with macro.
#define row 3
#define col 2
#include<stdio.h>
/*addition and substraction of matrices
size of two matrices must be same.
*/
void main(){
int a[3][2]={{1,2},{3,4},{5,6}};
int b[3][2]={{0,-9},{4,6},{8,10}};


for (int i =0;i<row;i++)
{
    for (int j = 0; j<col; j++)
    {
        printf("%d\t",a[i][j]-b[i][j]);
    }
    printf("\n");
}


}