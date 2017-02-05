#include <stdio.h>
/**
* understanding c strings
**/
int main()
{
/*	char s = "swati"; */ /* will give compiler error */


	/* this first creates a string in read only memory and then in 
	   pointer s, stores the address of that memory, i cannot make any 
	   changes to this string */
	char *s = "swati"; /* pointer of type char to a string literal is valid */
	printf("%s\n", s);
/*	s[0] = 'a'; /* cannot do this, no complier error but segfault */

	/* alternativelly when initialized and declared as an array, it creates 
	   a string in read only memory and when array is declared it copies the
	   string in the array and not address, so can edit it */
	char s1[5] = "nitin";
	printf("%s\n", s1);
	s1[0] = 's';
	printf("%s\n", s1);

	/* another way to declare the array with value */
	char s2[] = "garg";
	printf("%s\n", s2);

/* makes it a pointer to pointer */ 
/*	char *s3[] = "nitingarg";
	printf("%s\n", *s3); */

	return (0);
}
