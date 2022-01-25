#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc, a, b, c;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b>>c;

        if(a==b && b==c && c==a)
            cout<<"1 1 1\n";

        else if(a>=b && a>=c)
        {
            if(a==b)
                cout<<1<<" "<<1<<" "<<(a-c)+1<<"\n";
            else if(a==c)
                cout<<1<<" "<<(a-b)+1<<" "<<1<<"\n";
            else
                cout<<0<<" "<<(a-b)+1<<" "<<(a-c)+1<<"\n";

        }
        else if(b>=a && b>=c)
        {
            if(b==a)
                cout<<0<<" "<<0<<" "<<(b-c)+1<<"\n";
            else if(b==c)
                cout<<(b-a)+1<<" "<<1<<" "<<1<<"\n";
            else
                cout<<(b-a)+1<<" "<<0<<" "<<(b-c)+1<<"\n";
        }
        else if(c>=a && c>=b)
            if(c==a)
                cout<<1<<" "<<(c-b)+1<<" "<<1<<"\n";
            else if(c==b)
                cout<<(c-a)+1<<" "<<1<<" "<<1<<"\n";
            else
                cout<<(c-a)+1<<" "<<(c-b)+1<<" "<<0<<"\n";

    }

    return 0;
}
