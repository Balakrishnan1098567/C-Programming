#include<stdio.h>
# include<string.h>


int main() {


    /* the below given code is for the cahr array vs pointer to an array literal*/

       char s1[] = "abcdef"; // is a stack(of character array) and we can know the location.

       s1[0] = 'X';
       s1[1] = 'H';  // for s1[1] it acts like a constant pointer and we cannot do array arithmetic (as s1[1]++ will not move to next element).

       printf("s1: %s\n", s1);

       char *s2 = "abcdef";    // is a pointer to a string literal that is stored somewhere in the memory.

       printf("s2: %s\n", s2); // gives the entire string.

       printf("*s2: %c\n", *s2); // gives only the value of the first element in the string.

       s2++;
       printf("s2: %s\n", s2); // here the pointer will point to the 2nd elemnt and the string will start from "bcdef".

        //s1 = "new string"; // we cannot do this directly , instead we muust use strcpy() and copy the whole string to modify to a new values.

       s2 = "new string";

       printf("s2: %s\n", s2);

       printf(" size of s1: %zd\n", sizeof(s1));
       printf("size of s2: %zd\n", sizeof(s2));   // we will get the size of the pointer not the number of elemnts in the stack.
       /****************************************************************************************/
}