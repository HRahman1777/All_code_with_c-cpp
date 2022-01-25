#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a+b == c+d)
        cout<<"YES"<<endl;
    else if(a+c == b+d)
        cout<<"YES"<<endl;
    else if(a+d == b+c)
        cout<<"YES"<<endl;
    else if(a == b+c+d)
        cout<<"YES"<<endl;
    else if(b == a+c+d)
        cout<<"YES"<<endl;
    else if(c == a+b+d)
        cout<<"YES"<<endl;
    else if(d == a+b+c)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;


    return 0;

}
