#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    if(a==b && b==c && c==a)
    {
        cout<<"Equilateral Triangle\n";
    }
    else if((a==b && b!=c)||(b==c && a!=b) || (a==c && a!=b))
    {
        cout<<"Isosceles Triangle\n";
    }
    else
        cout<<"Bad Triangle\n";

    return 0;

}


