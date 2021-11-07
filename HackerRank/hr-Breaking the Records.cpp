#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

void testCase(int  n)
{
    int arr[n], h, l, f_h=0, f_l=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(i==0)
        {
            h=arr[i];
            l=arr[i];
        }
        else
        {
            if(arr[i]>h)
            {
                h=arr[i];
                f_h++;
            }
            if(arr[i]<l)
            {
                l=arr[i];
                f_l++;
            }
        }
    }

    cout<<f_h<<" "<<f_l;

}


int main()
{
    int tc;
    scanf("%d", &tc);
    testCase(tc);

    return 0;
}
