#include<bits/stdc++.h>

using namespace std;

int main()
{
    int nZ, nO, n, c0, c1, h, tc;
    cin>>tc;
    while(tc--)
    {
        nZ=0, nO=0;
        cin>>n>>c0>>c1>>h;
        char str[n];
        cin>>str;
        for(int i=0; i<n; i++)
        {

            if(str[i]== '0')
                nZ++;
            else if(str[i]=='1')
                nO++;
        }
        int res1, res2, res3, res4;
        res1=(nZ*c0)+(nO*c1);
        res2=(nZ*h)+(n*c1);
        res3=(nO*h)+(n*c0);
        res4=((nZ*h)+(nO*h)+((nZ*c1)+(nO*c0)));
        vector<int> vec = {res1, res2, res3, res4};
        cout<<*min_element(vec.begin(), vec.end())<<"\n";
    }
}
