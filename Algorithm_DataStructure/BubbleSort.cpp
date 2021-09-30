///exchanging method , comparison class | O(n^2)

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int l)
{
    int temp;
    int i, j;
    for (i=0; i<l-1; i++)
    {
        for (j=0; j<l-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
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
