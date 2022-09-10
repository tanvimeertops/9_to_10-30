/*string compare
0 =both string are same.
1=first string greater than second.
-1= second string greater than first.
strcpy(destination,source)
garbage collecter when ever the object are no longer needed then they are
automatically destroyed by the java garbage collector
java makes object in heap
garbage collection funtionality is provided by jvm.
virtual memory error
manually the garbage collection can be done.
eg: database collection is not closed.
automatic memory management.

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