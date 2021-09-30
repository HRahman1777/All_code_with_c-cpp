#include<bits/stdc++.h>
using namespace std;

int value, top;

void push(int arr[])
{
    cin>>value;
    top++;
    arr[top] = value;
}
void pop()
{
    top--;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    top = 4;

    cout<<"Normal: ";
    for(int i=0; i<=top; i++) //normal
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nAfter POP: ";
    pop();
    for(int i=0; i<=top; i++) //after pop
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nEnter a value to push: ";
    push(arr);
    cout<<"\nAfter PUSH: ";
    for(int i=0; i<=top; i++) //after push
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
