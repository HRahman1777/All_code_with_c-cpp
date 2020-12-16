#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, arr[10], n, k;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int z=0;
        if(n>45)
        {
            cout<<"-1";
            z=1;
        }
        else
        {
            k=0;
            for(int i=9; i>0; i--)
            {
                if(n==0)
                    break;
                else if(n-i >= 0)
                {
                    n=n-i;
                    arr[k]=i;
                    //cout<<"arr:"<<k<<" "<<arr[k]<<endl;
                    k++;
                }
            }
        }
        if(z==0)
        {
            for(int i=k-1; i>=0; i--)
            {
                //cout<<" i: "<<i<<" ";
                cout<<arr[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
