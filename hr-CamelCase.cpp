#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int cnt=0, l;
    l = sizeof(s);
    for(int i=0; i<l; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            cnt++;
    }

    cout<<cnt+1<<endl;

    return 0;
}
