#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, count=0, i;
    string str;
    cin>>str;
    l=str.length();
    sort(str.begin(),str.end());
    for (i = 1; i < l; i++)
    {
        if (str[i] != str[i-1])
        {
            count++;
        }
    }
    if((count+1)%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;

}

