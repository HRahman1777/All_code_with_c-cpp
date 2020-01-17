#include<iostream>
using namespace std;

int main()
{
    int tc, tc2, i, j=0;
    cin>>tc;
    cin>>tc2;
    string arr[tc], arr2[tc2];

    for(i=0; i<tc; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<tc2; i++){
        arr2[i] = arr[j];
        j++;
        if(j==tc){
            j=0;
        }
    }

    cout<<arr2[i-1]<<endl;

    return 0;

}
