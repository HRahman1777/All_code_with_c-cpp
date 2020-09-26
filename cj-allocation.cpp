#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc, tk, nb;
    cin>>tc;
    for(int t=1; t<=tc; t++)
    {
        cin>>nb>>tk;
        int arr[nb], min1=0;
        for(int i = 0; i<nb; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+nb);
        for(int i=0; i<nb; i++)
        {
            if(arr[i] <= tk)
            {
                tk = tk-arr[i];
                min1++;
            }
        }
        cout<<"Case #"<<t<<": "<<min1<<endl;
    }

    return 0;
}
