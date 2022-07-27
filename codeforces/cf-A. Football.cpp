#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    
    int count = 0;

    for(int i=0; i<str.size()-1; i++){
        
        if(count >= 6){
            cout<<"YES\n";
            return 0;
        }
        
        if(str[i] - str[i+1] == 0){
            count++;
            //cout<<count<<" ";
        }
        else{
            count = 0;
        }
        
        if(count >= 6){
            cout<<"YES\n";
            return 0;
        }
    }
    
    cout << "NO\n";

    return 0;
}