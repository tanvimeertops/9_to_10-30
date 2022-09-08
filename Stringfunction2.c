/* strcat,strlwr,strupr*/
#include<stdio.h>
#include<string.h>
void main(){
char a[]="tops ";
char b[]="HELLO";
printf("%s",strcat(a,b));
printf("%s",strupr(a));
printf("%s",strlwr(b));
}