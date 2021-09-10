///insertion method , comparison class | O(n^2)

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int l)
{
    int temp, ii;
    for(int i=0; i<l; i++)
    {
        temp = a[i];
        ii = i-1;
        while(ii>=0 && a[ii]>temp)
        {
            a[ii+1] = a[ii];
            ii=ii-1;
        }
        a[ii+1] = temp;
    }
}

int main()
{
    int len;
    cout<<"Enter the length of array: ";
    cin>>len;
    int arr[len];
    cout<<"Enter values of array: ";

    for(int i=0; i<len; i++)
    {
        cin>>arr[i];
    }

    insertion_sort(arr, len);

    for(int j=0; j<len; j++)
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}


