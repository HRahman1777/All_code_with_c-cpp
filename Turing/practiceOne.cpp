#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x, x2;
    cin>>x;

    int sum=0;

    vector<char> v(x.begin(),x.end());
    vector<char> v2;



    for(int i=0; i <= v.size();  i++)
    {


        //cout<<i<<" "<<v[i]<<endl;

        if(v[i]=='+')
        {
            int tem = v2[v2.size()-1]+ v2[v2.size()-2];
            v2.push_back(tem);
            cout<<" AA  "<<v[i];
        }
        else if(v[i]=='D')
        {
            int tem = v2[v2.size()-1] * 2;
            v2.push_back(tem);
            cout<<"  BB  "<<v[i];
        }
        else if(v[i]=='C')
        {
            v2.pop_back();
            //v.erase(v.begin()+(i-1));
            cout<<" CC  "<<v[i];
        }
        else
        {
            v2.push_back(v[i]);
            cout<<" DD  "<<v[i];
        }

    }

    for(int i=0; i <= v2.size();  i++)
    {
        cout<<i<<" "<<v2[i]<<endl;

    }


    return 0;
}
