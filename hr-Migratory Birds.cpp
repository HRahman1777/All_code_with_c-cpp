#include<bits/stdc++.h>

using namespace std;


int testCase(int t)
{
    int temp, one, two, three, four, five;
    one = two = three = four = five = 0;
    int vc[5]= {0, 0, 0, 0, 0};
    for(int i=0; i<t; i++)
    {
        cin>>temp;

        if(temp==1)
        {
            one++;
            vc[0]=one;
        }
        else if(temp == 2)
            vc[1]=++two;
        else if(temp == 3)
            vc[2]=++three;
        else if(temp == 4)
            vc[3]=++four;
        else if(temp == 5)
            vc[4]=++five;

    }
    int max=vc[0], flag=0;
    for(int i=1; i<5; i++)
    {
        if(vc[i] > max)
        {
            max=vc[i];
            flag=i;
        }
    }

    return flag+1;
}


int main()
{
    int tc, ans;
    cin>>tc;
    ans=testCase(tc);

    cout<<ans;

    return 0;
}
