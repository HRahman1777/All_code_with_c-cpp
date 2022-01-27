#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    double a, b, c, d, t, t2;
	    cin>>a>>b>>c>>d;
	    t = ((a/c) * (a/c)) / c;
	    t2 = ((b/d) * (b/d)) / d;
	    if(t == t2){
	    cout<<"YES\n";    
	    }else
	    cout<<"NO\n";
	}
	return 0;
}
