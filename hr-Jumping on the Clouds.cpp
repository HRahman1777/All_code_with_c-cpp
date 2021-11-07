#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c)
{
    int cnt=0;
    for(int i=0; i<c.size()-1; i++)
    {
        if(c[i] == 0)
        {
            if(c[i+1] == 0 && c[i+2] == 0)
            {
                cnt++;
                i++;
            }
            else if(c[i+1] == 0 && c[i+2] == 1)
            {
                cnt++;
                //i++;
            }
            else if(c[i+1] == 1 && c[i+2] == 0)
            {
                cnt++;
                i++;
            }
            else
                cnt++;
        }
    }

    return cnt;
}

int main()
{
    int n, c_item;
    cin>>n;
    vector<int> c(n);

    for(int i = 0; i < n; i++)
    {
        cin>>c_item;
        c[i] = c_item;
    }

    int result = jumpingOnClouds(c);

    cout << result << "\n";

    return 0;
}
