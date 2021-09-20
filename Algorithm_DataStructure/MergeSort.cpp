///merging method, Divide and Conquer | O(n*log(n))

#include<bits/stdc++.h>
using namespace std;


void merge_sort(int a[], int l)
{


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

    merge_sort(arr, len);

    for(int j=0; j<len; j++)
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}


