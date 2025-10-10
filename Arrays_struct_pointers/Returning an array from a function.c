/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


/* The below function is given as an example to return an array using static memory
 * It is used in cases where the data to be given is known to us
 * That is we already know we will have 5 entries to our array.*/
// int *set_array(int value)
// {
// 	static int array[5];

// 	for(int i = 0; i < 5; i++)
// 	{
// 		array[i] = value;
// 	}

// 	return array;
// }

/* The below given function is an example for returning an array from a function using malloc
  * It is used mainly when we need the data to be there in the memory and must be present to the main function from anywhere.
  */

int *set_array(int value)
{
	int  *array = malloc(sizeof(int)*5);

	for(int i = 0; i < 5; i++)
	{
		array[i] = value;
	}
	return array;

}

int main()
{
	int array[] = {1,2,3,4,5};

	int *result = set_array(4);

	for(int i = 0; i<5; i++)
	{
		printf("result[%d] = %d\n", i, result[i]);
	}
    
    free(result);
	return 0;
}