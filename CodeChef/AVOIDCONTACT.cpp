#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int t, i;
	    cin>>t>>i;
	    if(t == i){
	        cout<<(t*2)-1<<"\n";
	    }
	    else{
	        int g = t-i;
	        cout<<(i*2)+g<<"\n";
	    }
	}
	
	return 0;
}
