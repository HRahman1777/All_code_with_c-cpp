#include <bits/stdc++.h>
using namespace std;

#define STACK_MAX 100

typedef struct
{
    int top;
    int data[STACK_MAX];
} Stack;

void push(Stack *s, int item)
{
    if (s->top < STACK_MAX)
    {
        s->data[s->top] = item;
        cout << "Pushed value is: " << s->data[s->top] << endl;
        s->top = s->top + 1;
    }
    else
        cout << "Stack is Full.\n";
}
void pop(Stack *s)
{
    int item;
    if (s->top == 0)
        cout << "Stack is Empty.\n";
    else
    {
        s->top = s->top - 1;
        item = s->data[s->top];
    }
    cout << "POPed value is: " << item << endl;
}

void display(Stack *s)
{
    if (s->top == 0)
        cout << "Stack is Empty.\n";
    else
    {
        cout << "Stack : ";
        for (int i = 0; i < s->top; i++)
        {
            cout << s->data[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    Stack st;

    st.top = 0;

    push(&st, 1);
    push(&st, 2);
    push(&st, 3);
    push(&st, 4);

    pop(&st);
    pop(&st);

    display(&st);

    return 0;
}
