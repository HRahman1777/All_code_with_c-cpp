#include<iostream>
using namespace std;

int main()
{
    int tc, a, b, c, sm;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b>>c;
        sm=0;
        while(b>=2 && c>=2)
        {
            b=b-1;
            c=c-2;
            sm=sm+3;
        }
        while(a>=1 && b>=2)
        {
            a=a-1;
            b=b-2;
            sm=sm+3;
        }
        while(b>=1 && c>=2)
        {
            b=b-1;
            c=c-2;
            sm=sm+3;
        }

        cout<<sm<<endl;
    }

    return 0;
}
