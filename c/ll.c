#include <stdlib.h>
#include <stdio.h>

/**
* Definition for singly-linked list.
*/*
 struct ListNode {
    int val;
    struct ListNode *next;
};

/* struct ListNode *addNode(struct ListNode **head, int value); */

struct ListNode *addNode(struct ListNode **head, int value)
{
	struct ListNode *new;

	new = malloc(sizeof(struct ListNode));
	if (new == NULL)
		return (NULL);
	new->val = value;
	new->next = *head;
	*head = new;
	return (*head);
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode *head = NULL;
	int sum = 0;
	int carry = 0;

	while (l1 && l2)
	{
		sum = l1->val + l2->val + carry;
		if (sum > 9)
		{
			carry = sum / 10;
			sum %= 10;
		}
		addNode(&head, sum);
		l1 = l1->next;
		l2 = l2->next;
	}
	printf("[carry] %d\n", carry);
	if (carry > 0)
		addNode(&head, carry);
	return (head);
}

int main ()
{
	
}
