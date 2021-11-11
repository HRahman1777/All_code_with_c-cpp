#include <bits/stdc++.h>
using namespace std;

#define Q_MAX 100

typedef struct
{
    int front;
    int rear;
    int data[Q_MAX];
} Queue;

void enQueue(Queue *q, int item)
{
    if (q->rear > Q_MAX)
    {
        cout << "Queue is full.\n";
    }
    else
    {
        q->data[q->rear] = item;
        cout << "Enqueued value is : " << q->data[q->rear] << endl;
        q->rear = q->rear + 1;
    }
}

void deQueue(Queue *q)
{
    if (q->rear == 0)
    {
        cout << "Queue Is Empty.\n";
    }
    else
    {
        q->front = q->data[0];
        q->rear--;
        for (int i = 0; i < q->rear; i++)
        {
            q->data[i] = q->data[i + 1];
        }
        cout << "Dequeued value is : " << q->front << endl;
        q->front = q->data[0];
    }
}

void display(Queue *q)
{
    if (q->rear == 0)
    {
        cout << "Queue Is Empty.\n";
    }
    else
    {
        cout << "Queue : ";
        for (int i = 0; i < q->rear; i++)
        {
            cout << q->data[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    Queue qu;
    qu.front = 0;
    qu.rear = 0;

    enQueue(&qu, 1);
    enQueue(&qu, 2);
    enQueue(&qu, 3);
    enQueue(&qu, 4);
    enQueue(&qu, 5);

    deQueue(&qu);
    deQueue(&qu);

    display(&qu);

    return 0;
}
