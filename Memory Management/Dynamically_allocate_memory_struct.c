
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int x;
	int y;
} Point;

int main()
{
	Point p1;
	p1.x = 8;
	p1.y = 2;
	printf("example struct(%d,%d)\r\n\n",p1.x,p1.y);



	/*Declare a pointer to a Point struct that will store the memory address of a Point struct on the heap.
	  malloc() will allocate enough space in bytes on the heap for the Point struct, by using sizeof(Point) we get
	  the size in bytes to store a Point struct and pass it to malloc to ensure it allocates this amount of space.
	  malloc() will return the memory address of this block of memory, and we store it into the pointer variable p2.
	  ****************/

	Point *p2 = malloc(sizeof(Point));


	(*p2).x = 27;
	p2->y = 80;   //Just written to show that we could either use dot(.) or (->) operator to access the members of the struct.

	printf("Example to check malloc = (%d,%d)\r\n",(*p2).x,p2->y);

	//Need to free the dynamically allocated memeory to avoid memory leaks.
	free(p2);

	/****************************************************************************
	   Example of dynamically allocating space for an array of structs and then
	   using realloc() to increase the length of the array.
	 ****************************************************************************/
	int length = 3;
	
    /* array is a pointer to a Point struct.  This time when we call malloc() and
       provide the number of bytes to allocate as an argument, we multiply
       sizeof(Point) (which is the size in bytes to store a Point struct) by the
       length of our array (i.e. the number of Point structs to be stored).  
       This will give us enough space to store the array of structs, and malloc() will
       return the memory address of the first Point struct which we store
       into array.
    ****************************************************************************/
	
	Point *array = malloc(sizeof(Point) * length);
	
	

	array[0].x = 10;
	array[0].y = 20;

	array[1].x = 12;
	array[1].y = 13;

	array[2].x = 25;
	array[2].y = 26;
    
    printf("\n.....Array....\n");
	for(int i =0; i<length; i++)
	{
		printf("(%d,%d)\r\n",array[i].x,array[i].y);
		

	}

   /*
   Example for reallocating a dynamically allocated memory.
   The main advantage of using Dymanically allocated memory is that we will be able to reallocate them whenever we want to.
   */

    length = 4;
    
  /*Then we call realloc() to allocate space for this larger block of memory
   to store the larger array.  The 2nd argument to realloc() is the size of
   the new block of memory.  We multiply the new length of the array by the
   size in bytes that it takes to store a Point struct as given by
   sizeof(Point) to get the total number of bytes required.  We pass as a
   first argument to realloc() the pointer (memory address) of the block
   of memory that we wish to reallocate.  Sometimes the block of memory will
   be increased in size at its existing location in memory, in which case
   realloc() will return the same pointer (memory address) which we then store
   into array.  It's possible that the block of memory that's allocated cannot
   be expanding at its existing location in memory (perhaps it would require
   overwriting nearby memory that is not available).  In this case, realloc()
   may move the block of memory to a new location in memory, in which case it
   will return this new pointer (memory address) and we will store this into
   array to ensure that array continues to point to our dynamically allocated
   array on the heap.*/
   
   array = realloc(array,sizeof(Point)*length);
   
   
   printf(".....The Array after Reallocation.....\n");
   
   array[3].x = 23;
   array[3].y = 32;
  
   
  for(int i = 0;i<length;i++)
  {
    printf("(%d,%d)\n",array[i].x,array[i].y);
  }
   
  
  free(array);
   

	return 0;
}