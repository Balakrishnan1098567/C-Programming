/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int subtract ( int x , int y)
{
    return x - y;
}

int add ( int x , int y )
{
    return x + y;
}

int multiply( int x , int y)
{
    return x * y;
}

int (*select_Operation())(int ,int)
{
    int operation = 0;
    
    printf("Enter a number for an operation\n");
    printf("Enter 1) for Add\n");
    printf("Enter 2) for Subtract\n");
    printf("Enter 3) for Multiplictaion\n");
    
    scanf("%d\n",&operation);
    
    if(operation == 1) return add;
    else if(operation == 2) return subtract;
    else if(operation == 3) return multiply;
    else return NULL;
    
}


int main()
{
   
   int (*operations)(int , int ) = select_Operation();
   
   printf("answer : %d\n",operations(20,5));
   
   
    
    //printf("Hello World");

    return 0;
}