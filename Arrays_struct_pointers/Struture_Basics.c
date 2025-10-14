
/*
.
The libraries that are used in this code is given below.
.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//struct Student {
//                        // A basic structure syntax;
//	char name[50];
//	char id[10];
//	int age;
//	int grades[5];
//};


/*
.
A single structure can define different data types in it.
Typedef is used as an alias to make the code more readable.
Structures Defined in this code is given below.
.
*/
typedef struct{           //Typedef is used to make the code more readable and easy to understand.
                         // Just acts as an alias for the struct instead of calling struct student we could simply call student.
	char name[50];
	char id[10];
	int age;
	int grades[5];

}Student;


typedef struct{

	int x;
	int y;

}points;


typedef struct {
	                        
	int* array;                      // structure with pointers.

}Pointer_to_array;


/*
.
Function calls.
.
.*/
void Print_student_Details(Student student);  
void Print_array_Struct(points *pointing);
void Print_pointer_struct(Pointer_to_array* x, Pointer_to_array* y);

int main(void)
{
	/*struct Student Section_12_A = {
		"balakrishnan",
			"Ab009878",                // Basic structure call.
			16,
		{83,90,74,89,93}

	};*/

	Student Section_A = {

		"balakrishnan",
		"Ab009878",
		16,
	    {83,90,74,89,93}

	};

	points p1 = { 10, 20 };
	points p2 = { .y = 90, .x = 12 };  // This way we could also change the order of elemnts in the structure.

	printf(" p1.x : %d\n", p1.x);
	printf(" p1.y : %d\n", p1.y);

	printf(" p2.x : %d\n", p2.x);
	printf(" p2.y : %d\n", p2.y);


	Print_student_Details(Section_A);       // Passing a stucture to a Function.

	points point[10];

	for (int i = 0; i < 10; i++)
	{
		point[i].x = i;
		point[i].y = 10 - i;

	}

	Print_array_Struct(point);



	Pointer_to_array x;
	Pointer_to_array y;


	x.array = malloc(sizeof(int) * 6);
	y.array = malloc(sizeof(int) * 6);

	for (int i = 0; i < 6; i++)
	{
		x.array[i] = i;
		y.array[i] = 6 - i;
	}

	Print_pointer_struct(&x,&y);
	//Print_pointer_struct(&y);

	/*
	Since we have used malloc we must free the  Dynamically allocated memory.
	*/
	free(x.array);
	free(y.array);


	/*strcpy(Section_12_A.name, "Balakrishnan");
	strcpy(Section_12_A.id,"Ab002345");

	Section_12_A.age = 16;

	*/

	/*printf("Name: %s \n",Section_A.name);
	printf("Age: %d \n", Section_A.age);
	printf("ID: %s \n", Section_A.id);                           // Basic studture call and prints.
	for (int i = 0; i < 5; i++)
		printf("Grades obtained: %d \n", Section_A.grades[i]);*/

	return 0;

}

void Print_student_Details(Student student)   // Function definition 
{
	printf("Name: %s \n", student.name);
	printf("Age: %d \n", student.age);
	printf("ID: %s \n", student.id);
	for (int i = 0; i < 5; i++)
		printf("Grades obtained: %d \n", student.grades[i]);

}

/*
For the below function
we could also use void Print_array_Struct(points pointing[])
or void Print_array_struct(points pointing[10]). 
.
*/
void Print_array_Struct(points *pointing)      
{
	for (int i = 0; i < 10; i++)
	{
		printf("p%d = (%d,%d)\n", i, pointing[i].x, pointing[i].y);
	}

}

void Print_pointer_struct(Pointer_to_array *x,Pointer_to_array *y)
{
	for (int i = 0; i < 6; i++)
	{
		printf("Pointer to an array x[%d] and y[%d] = %d,%d\n", i,i, x->array[i],y->array[i]);
	}
}