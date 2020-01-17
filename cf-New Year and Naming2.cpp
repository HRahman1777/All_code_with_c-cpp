#include<iostream>
#include<string>
using namespace std;

int main()
{
    int tc1, tc2, poss, mTc;
    cin>>tc1>>tc2;
    string arr[tc1], arr2[tc2];
    int i,j, a, b;
    for(i=0; i<tc1; i++){
        cin>>arr[i];
    }
    for(i=0; i<tc2; i++){
        cin>>arr2[i];
    }
    cin>>poss;

    while(poss--){
        a=0,b=0;
        cin>>mTc;
        string tPot[mTc];
        string tPot2[mTc];

        for(j=0; j<mTc; j++){
            tPot[j]=arr[a];
            a++;
            if(a == tc1){
                a=0;
            }
        }
        cout<<tPot[a-1];
        for(j=0; j<mTc; j++){
            tPot2[j]=arr2[b];
            b++;
            if(b == tc2){
                b=0;
            }
        }
       cout<<tPot2[b-1]<<endl;
    }

    return 0;
}
