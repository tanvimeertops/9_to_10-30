/*Sorting with  Array.*/
/*bubble sort (comparision of two values) 
*/
#include<stdio.h>
void main(){
    int a[]={2,1,5,3,4,6};
    
    for (int i = 0; i<6; i++)
    {
       for (int j= i+1; j<6; j++)
       {
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j]; 
            a[j]=temp;

        }
       }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("\n%d",a[i]);
    }
    
    
}