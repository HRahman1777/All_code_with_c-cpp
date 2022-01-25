#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<cstddef>

using namespace std;

int main()
{
    string wrd;
    cin>>wrd;
    int l = wrd.size();

    for(int i=0; i<l; i++)
    {
        if(wrd[i] >= 65 && wrd[i] <= 96)
            wrd[i] = wrd[i] + 32;
        if(wrd[i]!='a' && wrd[i]!='e' && wrd[i]!='i' && wrd[i]!='o' && wrd[i]!='u' && wrd[i]!='y')
            cout<<"."<<wrd[i];
    }

    return 0;
}
