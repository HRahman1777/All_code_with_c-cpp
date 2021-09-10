///divide and conquer | O(log n)

#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[], int tar, int l)
{
    int first, last, mid, indx;
    first = 0, last = l - 1;
    indx = -1;
    while(first<=last)
    {
        mid =  (first+last)/2;
        if(a[mid] == tar)
        {
            indx = mid+1;
            break;
        }

        else if(tar>a[mid])
            first = mid+1;
        else
            last = mid-1;
    }
    return indx;
}

int main()
{
    int len, target, result;
    cout<<"Enter the length of array: ";
    cin>>len;
    int arr[len];
    cout<<"Enter values of array: ";
    for(int i=0; i<len; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter Target: ";
    cin>>target;

    result = binary_search(arr, target, len);

    if(result != -1)
        printf("%d found!! Index no: %d\n", target, result);
    else
        cout<<"Not Found!!\n";
    return 0;
}

