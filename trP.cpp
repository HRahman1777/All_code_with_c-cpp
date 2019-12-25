#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n;
    cin>>n;
    unsigned int count = 0;
    while(n)
    {
        count += n & 1;
        cout<<"preN="<<n<<"  "<<(n&1)<<endl;
        cout<<"Cnt="<<count<<endl;
        n >>= 1;
        cout<<"n="<<n<<"\n\n";
    }
    cout << count;
    return 0;
}
