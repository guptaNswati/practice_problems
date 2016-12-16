#include <stdio.h>
#include <stdlib.h>

/**
* for understanding how pointers work and their size
**/
int main()
{
	char *s;
	int *i;
	float *f;
	double *d;
	long *l;

	/* 1. sizeof pointers 8 bytes for all types */
	printf("%lu\n", sizeof(s));
	printf("%lu\n", sizeof(i));
	printf("%lu\n", sizeof(f));
	printf("%lu\n", sizeof(d));
	printf("%lu\n", sizeof(l));

	/* 2. address */
	char c = 's';
	s = &c;

	int n = 10;
	i = &n;

	float ff = 10.1;
	f = &ff;

	double dd = 10.22;
	d = &dd;

	long ll = 32;
	l = &ll;

	printf("%p\n", s);
	printf("s++  %p\n", s++); /* will be same as address of s */
	printf("%p\n", i);
	printf("i++  %p\n", i++);
	printf("i+4  %p\n", i + 4); /* will print random address added 4 to it */
	printf("%p\n", f);
	printf("f++  %p\n", f++);
	printf("f+4  %p\n", f+4);
	printf("%p\n", d);
	printf("d++  %p\n", d++);
	printf("%p\n", l);
	printf("l++  %p\n", l++);

	/* 3. values & derefrencing  */
	printf("%c\n", *s);
        printf("%d\n", *i);
        printf("%f\n", *f);
        printf("%f\n", *d);
        printf("%lu\n", *l);
	return(0);
}
