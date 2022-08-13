//switch : you can select the option by using switch case.
/* WAP to show 
1. Monday to Sunday using switch case 
2. Vowel or Consonant using switch case*/
#include<stdio.h>
void main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
       printf("vowel");
        break;
      
    default:
    printf("consonant");
        break;
    }
}