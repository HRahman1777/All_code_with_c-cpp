#include<bits/stdc++.h>
using namespace std;

void catAndMouse(int x, int y, int z)
{
    int catA = abs(z-x);
    int catB = abs(z-y);
    //cout<<catA<<" "<<catB;
    if(catA==catB)
        cout<<"Mouse C"<<endl;
    else if(catA<catB)
        cout<<"Cat A"<<endl;
    else
        cout<<"Cat B"<<endl;
}


int main()
{
    int a, b, c, testCase;
    cin>>testCase;
    while(testCase--)
    {
        cin>>a>>b>>c;
        catAndMouse(a, b, c);
    }

    return 0;
}
