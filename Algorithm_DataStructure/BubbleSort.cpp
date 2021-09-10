///exchanging method , comparison class | O(n^2)

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int l)
{
    int temp, x;
    for(int i=0; i<l; i++)
    {
        for(int ii=i; ii>0; ii--)
        {
           if(a[ii]<a[ii-1])
           {
               temp = a[ii];
               a[ii] = a[ii-1];
               a[ii-1] = temp;
           }
        }
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

    bubble_sort(arr, len);

    for(int j=0; j<len; j++)
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}
