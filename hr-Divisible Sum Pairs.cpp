#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

void testCase(int  n, int ck)
{
    int arr[n], cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((i+j)%ck==0)
                cnt++;
        }
    }

    cout<<cnt;

}


int main()
{
    int tc, c;
    scanf("%d %d", &tc, &c);
    testCase(tc, c);

    return 0;
}

