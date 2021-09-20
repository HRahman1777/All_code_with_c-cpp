///selection method , comparison class | O(n^2)

#include<bits/stdc++.h>
using namespace std;


void selection_sort(int a[], int l)
{
    for(int i=0; i<l; i++)
    {
        int m = a[i], flag=i;
        for(int j=i+1; j<l; j++)
        {
            if(a[j]<m)
            {
                m=a[j];
                flag=j;
            }
        }
        a[flag] = a[i];
        a[i] = m;
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

    selection_sort(arr, len);

    for(int j=0; j<len; j++)
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}

