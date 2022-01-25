#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<int> g1;
    for(int i=1; i<10; i++)
        g1.push_back(i);
    for(auto it=g1.begin(); it != g1.end(); it++)
        cout<<"first one >>"<<*it<<" ";

    cout<<endl;
    g1.resize(5);
    for(auto it=g1.begin(); it != g1.end(); it++)
        cout<<"second one >>"<<*it<<" ";


    return 0;
}
