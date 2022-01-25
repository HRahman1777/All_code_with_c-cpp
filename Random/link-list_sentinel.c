#include <stdio.h>

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

void insert(struct Node** start, int value)
{

	if (*start == NULL)
	{
		struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
		new_node->data = value;
		new_node->next = new_node->prev = new_node;
		*start = new_node;
		return;
	}
	struct Node *last = (*start)->prev;

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = value;

	new_node->next = *start;

	(*start)->prev = new_node;

	new_node->prev = last;

	last->next = new_node;
}

void display(struct Node* start)
{
	struct Node *temp = start;
	while (temp->next != start)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("%d ", temp->data);

}

int main()
{
	struct Node* start = NULL;

	insert(&start, 5);
	insert(&start, 6);
	insert(&start, 1);
	insert(&start, 2);


	printf("Created circular linked list (sentinel): ");
	display(start);

	printf("\n\n");

	return 0;
}
