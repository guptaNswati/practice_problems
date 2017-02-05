#include <stdio.h>
#include <stdlib.h>

/**
* struct testLl - Struct for building a test linkedlist
* @x: an int
* @next: pointer to next node in the list
**/
typedef struct testLl
{
	int x;
	struct testLl *next;
} testLl;

/**
* constructList - creates a linkedlist
* Return: pointer to head of linkedlist
**/
testLl *constructList()
{
	testLl *head;

	head = malloc(sizeof(testLl));
	if (head == NULL)
		return (NULL);

	head->x = 2;
	head->next = malloc(sizeof(testLl));
	head->next->x = 3;
	head->next->next = malloc(sizeof(testLl));
	head->next->next->x = 4;
	head->next->next->next = malloc(sizeof(testLl));
	head->next->next->next->x = 5;
	head->next->next->next->next = NULL;
	return (head);
}
/**
* main - for testing and traversing the linkedlist
* Return: 0
**/
int main()
{
	testLl *temp;

        temp = constructList();
	while (temp != NULL)
	{
		printf("%d\n", temp->x);
		printf("%p\n", temp);
		temp = temp->next;
	}
	return (0);
}
