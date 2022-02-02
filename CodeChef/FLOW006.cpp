#include <iostream>
using namespace std;

int main() {
	int tc, n1, n2, tm;
	cin >> tc;
	for (int i=1; i<=tc; i++) {
	    cin>>n1;
	    n2 = n1;
	    int sum = 0;
	    for(int j=n2; j>0; j=j/10)
	    {
	        tm = j%10;
	        sum = sum + tm;
	    }
	    
	    cout<<sum<<endl;
	    
	}
	
	return 0;
}
