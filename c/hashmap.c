/**
* a simple C implementation of a hash table using chaining
**/

#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10

typedef struct hashList
{
	int key;
	char *value;
	struct hashList *next;
} hashList;

/**
* add a node at the begining of a hashList list and returns its address if succesful
**/
hashList *addNode(hashList **head, int key, char *value)
{
	hashList *new;

	new = malloc(sizeof(hashList));
	if (new == NULL)
		return (NULL);

	new->key = key;
	new->value = value;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}


int hash_code(char *str)
{
	int sum = 0, i;

	for (i = 0; str[i]; i++)
		sum += str[i];
	return (sum % TABLE_SIZE);
}

void populateTable(char **arr)
{
	hashList **table; /* or *table[TABLE_SIZE]*/
	hashList *h;
	int i;

	table = malloc(sizeof(hashList *) * TABLE_SIZE);
	if (table == NULL)
		return;
	h = NULL;
	for (i = 0; i < TABLE_SIZE; i++)
		table[i] = h;

	for (i = 0; arr[i]; i++)
	{
		int res = hash_code(arr[i]);
		addNode(&table[res], res, arr[i]);
	}
	for (i = 0; i < TABLE_SIZE; i++)
	{
		hashList *h = table[i];
		if (h)
		{
			while (h)
			{
				printf("Key: %d, Value: %s\n", h->key, h->value);
				h = h->next;
			}
		}
	}
}

int main()
{
	char *arr[10] = {"Hello", "world", "whatsup", "made_hashtable", "with<3",
			"top of the world", "game is over", "oboy", "lets tweet",
			"cisfun indeed"};
	populateTable(arr);
	return (0);
}


/**
output: 
Key: 0, Value: whatsup
Key: 0, Value: Hello
Key: 1, Value: oboy
Key: 1, Value: top of the world
Key: 2, Value: made_hashtable
Key: 2, Value: world
Key: 5, Value: lets tweet
Key: 5, Value: with<3
Key: 7, Value: cisfun indeed
Key: 8, Value: game is over
**/
