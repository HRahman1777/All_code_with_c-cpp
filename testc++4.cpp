#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int pp, n;
    cin>>pp >>n >>s;
    cout<<pp<<n;
    getline(cin, s);
    remove(s.begin(), s.end(), 'a');
    s.erase( s.begin()+12, s.end());
    cout<<s;

    return 0;
}
