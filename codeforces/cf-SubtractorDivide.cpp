#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc, num, temp, coun;
    cin>>tc;
    while(tc--)
    {
        coun=0;
        cin>>num;
        while(num>1)
        {
            if(num%2==0)
            {
                temp=num/2;
                num=num/temp;
                coun++;
                if(temp==1)
                    break;
            }
            else
            {
                num=num-1;
                coun++;
            }
        }
        cout<<coun<<"\n";
    }

    return 0;

}
