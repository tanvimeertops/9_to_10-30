/*string : group of character
char of array
scanf will read upto space
gets will read until you press enter
fgets will read upto size of variable
string is stored in buffer

Function of strings
1.strrev
2.strcmp
3.strcpy
4.strlwr
5.strupr
6.strcat
7.strlen
*/
#include<stdio.h>
#include<string.h>
void main()
{
   char a[100];
   int i=0;
   printf("enter string:");
   //scanf("%s",&a);
   gets(a);//hello
   //char b[20];
   //fgets(a,sizeof(a),stdin);
   // puts(b);
  // printf("\n%s",strrev(a));
   printf("\n%d",strlen(a));
   while(a[i]!='\0'){
   i++;
   }
   printf("count of string:%d",i);
}