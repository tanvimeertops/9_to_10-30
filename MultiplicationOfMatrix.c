/*multiplication of matrix*/
/* no of column in first matrix should be equal 
to the no of row in the second matrix*/
#include<stdio.h>
void main(){
  int a[2][3]={{2,1,3},{8,2,3}}; 
  int b[3][2]={{1,2},{5,4},{2,-6}};
  int c[2][2],sum=0;  
  for (int k= 0; k<2; k++)
  {
    for (int i = 0; i<2; i++)
  {
    for (int j = 0; j<3; j++)
    {
        sum+=a[i][j]*b[j][k];
        //
        }
    c[i][k]=sum;//c[0][0],c[1][0],c[0][1],c[1][1] 

    sum=0; 
  }
  }
  for (int i = 0; i<2; i++)
  {
    for (int j = 0; j<2; j++)
    {
        printf("\t%d",c[j][i]);
    }
    printf("\n");
  }
  
  
  
  
}