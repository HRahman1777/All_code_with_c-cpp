#include <bits/stdc++.h>
using namespace std;


struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

void insertEnd(struct Node** start, int value)
{

	if (*start == NULL)
	{
		struct Node* new_node = new Node;
		new_node->data = value;
		new_node->next = new_node->prev = new_node;
		*start = new_node;
		return;
	}

	Node *last = (*start)->prev;

	struct Node* new_node = new Node;
	new_node->data = value;

	new_node->next = *start;

	(*start)->prev = new_node;

	new_node->prev = last;

	last->next = new_node;
}

void display(struct Node* start)
{
	struct Node *temp = start;

	printf("\nTraversal in forward direction \n");
	while (temp->next != start)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("%d ", temp->data);

	printf("\nTraversal in reverse direction \n");
	Node *last = start->prev;
	temp = last;
	while (temp->prev != last)
	{
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("%d ", temp->data);
}

/* Driver program to test above functions*/
int main()
{
	/* Start with the empty list */
	struct Node* start = NULL;

	insertEnd(&start, 5);
	insertEnd(&start, 6);

	printf("Created circular doubly linked list is: ");
	display(start);

	return 0;
}
