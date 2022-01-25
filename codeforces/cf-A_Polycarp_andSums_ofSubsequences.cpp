#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d, e, f, g;

    long long ans1, ans2, ans3;

    int tc;
    cin>>tc;

    while(tc--)
    {
        cin>>a>>b>>c>>d>>e>>f>>g;

        int arr[7] = {a, b, c, d, e, f, g};

        ans1 = g-f;

        if(b+c == f)
        {
            ans2 = b;
            ans3 = c;
        }
        else if(b+d == f)
        {
            ans2 = b;
            ans3 = d;
        }
        else if(c+d == f)
        {
            ans2 = c;
            ans3 = d;
        }

        cout<<ans1<<" "<<ans2<<" "<<ans3<<"\n";
    }

    return 0;
}
