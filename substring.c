#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *_strstr(char *s, char *m);

/**
* finds a substring in the given string
**/

int main(void)
{
	char *s = "hello, world";
	char *m = "world";
	char *t;

	t = _strstr(s, m);
	printf("%s\n", t);
	return (0);
}

char *_strstr(char *s, char *m)
{
	int len;

	len = strlen(m);
	while (*s != '\0')
	{
		if (strncmp(s, m, len) == 0)
			return (s);
		s++;
	}
	return (NULL);
}
