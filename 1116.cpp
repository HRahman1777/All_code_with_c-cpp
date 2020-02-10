#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{

    int tc;
    float x, y;
    cin >> tc;

    for(int i = 0; i < tc; i++)
    {
        cin>>x;
        cin>>y;
        if(y == 0)
        {
            cout << "divisao impossivel\n";
        }
        else
        {
            printf("%.1f\n", x/y);
        }
    }
    return 0;
}

