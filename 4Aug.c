/* c programming 
characteristics:
keywords are special word whose meaning is already stored in the compiler
compiler run and execute the program and converts the program into machine 
language(binary)it checks the whole program. faster
c,c++,java,.etc
interpreter it checks the program linewise (relatively slower)
javascript,python,java,.etc
1. mid level language 
it gives direct access to the memory.
2. 32 keywords
3. stable language.
4. easy to learn.
case sensitive language
*/
/*basic structure of c 
void it returns nothing (return type)
function is a block of code where the main business logic is written
[return type] [func name](){
variable is a storage container where the data is stored of a particular type.

datatype is a type of data
eg: 
int(numbers), %d  bytes
float(number with decimal),%f
double(number with decimal but size is long),%lf
char(single character),%c
long int(numbers but size is long),eg 10000000000 %ld
long double(number with decimal but size is long)%Lf
%u=unsigned
}
void is datatype which return nothing (null)
identifier/variable name: 
set of rules for naming a identifier
1.there should be no space in between identifier.
2.it should not be a keyword
3.always start with small letters.

type casting converts one type of data into another.

*/
#include<stdio.h>//preprocessor(library)(header file)(stdio=standard input output)
 
 void main(){//user define func
    //datatype indentifier;
 int num_1,num_2;

 //Assignment operator (=)
 //arithematic operator (+,-,*,/,%(mod))
 printf("\nEnter num 1:");
    scanf("%d",&num_1);
    printf("\nEnter num 2:");
    scanf("%d",&num_2);
    printf("Add:%d",num_1+num_2);
    printf("\nSub:%d",num_1-num_2);
      printf("\ndiv:%f",(float)num_1/num_2);
      printf("\nmod:%d",num_1%num_2);

// printf("\nAddress of num 1:%d",&num_1);
// printf("\nAddress of num 2:%d",&num_2);
}
