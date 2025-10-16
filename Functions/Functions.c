/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*The Below code file mainly describes function types that could be useful in Embedded programming
/*Those are Recursive, static and Inline via macros*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* Firstly we will discusss on Recursive function
Recursion is a Way of solving problems where our solution
depend on solutions to smaller instances of the same problem.
That is Function that calls themselves.
.
.
*Second we will discuss about Static functions
Static key word is used whenever a function is to kept hidden into only that file.
That function will only work within the file which contains it, is not accessible to a different file.
If iam creating another .c file and calling a static function inside it and trying to access that function in the main.c the function it will not work.

We could use the same function names in different file and perform different/same operations with the help of static keyword.

*Third we will discuss about Function-like Macros.
Macros are usally checked by the compiler during the preprocessor phase of the program.


*The below given are the macros used in this program.*/

#define MAX 20
#define print printf("ENTER A NUMBER FOR INCREMENTING!\n");
#define inc(x) x+2                               // function-like macro.


int Recursion(int n);

int main()
{
	int n = 0;
	int a = 0;
	int factorial = 1;

	printf("Enter a number");

	scanf("%d", &n);
	print
	scanf("%d", &a);
	factorial = Recursion(n);

	printf("The factorial for the number entered is : %d\n",factorial);

	a = inc(a);                    //incrementing the number by 2 using a function-like macro.

	printf("The inc(a) is : %d\n",a);

	return 0;

}

int Recursion(int n)
{
	if (n == 1) return 1;
	return n * Recursion(n - 1);
}


