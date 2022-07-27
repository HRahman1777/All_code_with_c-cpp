#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int tc;
    cin>>tc;
    vector<int> vec;
    for(int i=0; i<tc; i++){
        int vl;
        cin>>vl;
        vec.push_back(vl);
    }
    int cnt=0;
    int cnt2=0;
    vector<int> stor1, stor2;
    for(int i=0; i<vec.size(); i++){
        if(vec[i]%2 == 0){
            cnt++;
            stor1.push_back(i+1);
        }else{
            cnt2++;
            stor2.push_back(i+1);
        }
    }
    
    if(cnt==1)
        cout<<stor1[stor1.size()-1]<<"\n";
    else
        cout<<stor2[stor2.size()-1]<<"\n";

    return 0;
}