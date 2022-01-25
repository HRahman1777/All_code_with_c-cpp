#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    vector<int >v1;
    vector<int >v2;
    for(int i=1; i<11;i++)
    {
        v1.push_back(i);
    }

    cout<<"vector size "<<v1.size()<<endl;

    for(auto i = v1.begin(); i != v1.end(); i++)
        cout<<*i<<" ";
    cout<<"\nAfter"<<endl;

    v1.resize(5);
    cout<<"vector size "<<v1.size()<<endl;

    for(auto i = v1.rbegin(); i != v1.rend(); i++)
        cout<<*i<<" ";
    cout<<endl;
    cout<<v1.front()<<" "<<v1.back()<<endl;

    v2.assign(5, 10);
    for(int i=0; i<v2.size(); i++)
        cout<<v2[i]<<" ";

    cout<<endl;
    v2.insert(v2.begin(), 5);

    for(int i=0; i<v2.size(); i++)
        cout<<v2[i]<<" ";

    cout<<endl;
    if(v1.empty())
    {
        cout<<"haa"<<endl;
    }


    return 0;
}
