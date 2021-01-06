#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int uli;

int main()
{
    int tc;
    cin>>tc;
    uli num;
    while(tc--)
    {
        cin>>num;
stage:
        uli i, arr[10]= {0};
        int flag=0, cnt=0;
        for(i=num; i>0; i=i/10)
        {
            arr[i%10]=1;
            if(i%10==0)
            {
                cnt=1;
                flag=1;
            }
        }
        for(i=1; i<10; i++)
        {

            if(arr[i]==1)
            {
                cnt++;
                if(num%i == 0)
                    flag++;
            }
        }
        if(flag==cnt) cout<<num<<"\n";
        else
        {
            num++;
            goto stage;
        }
    }

    return 0;
}
