#include <stdio.h>
#include <stdlib.h>

typedef struct L_list
{
	int x;
	struct L_list *next;
}L_list;

/*
 * print a linkedlist in reverse
 */
void recursPrint(L_list *h)
{
	if (h == NULL)
		return;
	recursPrint(h->next);
	printf("%d\n", h->x);
}
/**
* constructList - function that creates a linkedList of L_list elements
* Return: Pointer to head of the list
**/
L_list **constructList()
{
	int i;
	L_list **h, *head, *temp, *new, *prev, *fFree;
	L_list list1 = {5, NULL};

	h = &head;
	head = malloc(sizeof(L_list));
	if (head == NULL)
		return;
	head = &list1;
	temp = malloc(sizeof(L_list));
	if (temp == NULL)
	{
		free(head);
		return;
	}
	temp->x = 6;
	temp->next = NULL;
	head->next = temp;
	for (i = 0; i < 2; i++)
	{
		temp->next = malloc(sizeof(L_list));
		if (temp->next == NULL)
		{
			while (head != NULL)
			{
				fFree = head;
				head = head->next;
				free(fFree);
				return;
			}
		}
		temp->next->x = i + 7;
		temp = temp->next;
	}
	 return(h);
	/*temp = head;
	while (temp != NULL)
	{
		printf("%d\n", temp->x);
                temp = temp->next;
		}*/
/*	prev = temp = head;
	while (prev->next != NULL)
		prev = prev->next;

	for (i = 2; i >= 0; i--)
	{
		head = temp;
		while (head->next->next != NULL)
			head = head->next;
		head->next = NULL;
		printf("%d\n", prev->x);
		prev->next = head;
		prev = prev->next;
	}
	printf("%d\n", prev->x); */
}
/**
* main - for testing
**/
int main()
{
	L_list **hp, *hd;


	hd = malloc(sizeof(L_list));
	hd->x = 1;
	hd->next = malloc(sizeof(L_list));
	hd->next->x = 2;
	hd->next->next = malloc(sizeof(L_list));
	hd->next->next->x = 3;
	hd->next->next->next = malloc(sizeof(L_list));
	hd->next->next->next->x = 4;
	hd->next->next->next->next = NULL;
	recursPrint(hd); 
/*	hp = constructList();
	hd = *hp;
	recursPrint(hd);
	hd = *(constructList());
	while (hd != NULL)
	{
		printf("%d\n", hd->x);
		hd = hd->next;
		}  */
 	return (0);
}
