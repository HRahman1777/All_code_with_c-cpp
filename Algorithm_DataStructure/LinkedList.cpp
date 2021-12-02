#include <bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node
{
    int data;
    Node *next_node;
};

Node *insert_node(int item, Node *n_node)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL)
    {
        cout << "Can't create new node in memory!\n";
        exit(1);
    }

    new_node->data = item;
    new_node->next_node = n_node;
    return new_node;
}

int main()
{
    Node *n, *n2, *n3;

    n2 = insert_node(10, NULL);
    n = insert_node(7, n2);

    cout << n->data << endl;
    cout << n2->data << endl;
    cout << n->next_node << endl;

    return 0;
}