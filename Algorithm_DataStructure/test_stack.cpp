#include <bits/stdc++.h>
using namespace std;
#define MAX 10

typedef struct
{
    int pos;
    int data[10];
} St;

void push(St s)
{
    s.data[s.pos] = 1;
    cout << s.data[s.pos] << endl;
    //s->pos += 1;
}

int main()
{
    St s;
    s.pos = 0;

    push(s);

    cout << s.data[s.pos];

    /*
    s.data[s.pos] = 45;
    cout << s.data[s.pos];
*/

    return 0;
}