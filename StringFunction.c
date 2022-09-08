/*string compare
0 =both string are same.
1=first string greater than second.
-1= second string greater than first.
strcpy(destination,source)
*/
#include<stdio.h>
#include<string.h>
void main(){
    char a[100],b[100];
    int val;
    printf("Enter a String: ");
    scanf("%s",&a);   
    strcpy(b,a);
    // printf("%s",b);
    strrev(b);
     
 val=strcmp(a,b);
  
    if(val==0)
        printf("string is palindrome");
        else
        printf("string is not palindrome");
    
}