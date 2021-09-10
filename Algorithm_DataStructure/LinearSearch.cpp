///brute force | O(n)

#include<bits/stdc++.h>
using namespace std;

int linear_search(int a[], int tar, int l)
{
    int indx;
    for(int i=0; i<l; i++)
    {
        if(a[i] == tar)
        {
            indx = i+1;
            break;
        }

        else
            indx = -1;
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

    result = linear_search(arr, target, len);

    if(result != -1)
        printf("%d found!! Index no: %d\n", target, result);
    else
        cout<<"Not Found!!\n";
    return 0;
}


