#include <stdio.h>

/**
* main - Prints if a character is a vowel or a consonant
* Return: 0
**/

int main(void)
{
	char letter;
	letter = 'd';
	
	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' 
	    || letter == 'u')
	{
		printf("%c - is a vowel\n", letter);
	}
	else
		printf("%c - is a consonant\n", letter);
	
	return (0);
}
	

