#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string wrd;
        cin>>wrd;
        int l = wrd.size();
        if(l>10)
        {
            cout<<wrd[0]<<l-2<<wrd[l-1]<<endl;
        }
        else
            cout<<wrd<<endl;
    }

    return 0;
}
