/*loop when a particular statement or a logic needs to be run n no of times
then the loop is required.

types of loop
1.for 
2.while
3.do while

1. for(initialization;condition;incree/decree)
        unary operator (++,--)

2.
initialization
while(condition)
{
    incree/decree
}
*/
// /*do_while
//initialization
// do
//     {
//         statement
            // incree/decree
//     } while (/* condition */);
// Q:difference between while and do while
/*while: first condition is checked and then statement is printed.
*do while :first statement printed and then condition is checked.
*/
#include<stdio.h>
void main(){
    int i=1;
    do
    {
        printf("\n%d",i);
        i++;
    } while (i<=10);
    
    


}