#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc, anum, value, temp;
    cin>>tc;
    while(tc--)
    {
        cin>>anum;
        vector<int> a, b;
        for(int i = 0; i < anum; i++)
        {
            cin>>value;
            a.push_back(value);
        }
        for(int i = 0; i < anum; i++)
        {
            cin>>value;
            b.push_back(value);
        }

        for(int i = 0; i < anum; i++)
        {
            if(a[i] < b[i])
            {
                temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }

        cout<<(*max_element(a.begin(), a.end())) * (*max_element(b.begin(), b.end()))<<"\n";

    }

    return 0;
}
