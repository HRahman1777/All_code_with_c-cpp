#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<long long int>v;
    long long int low, high, i, flag, x, y;
    cin>>x>>y;
    low = y;
    high = x;
    while (low < high)
    {
        flag = 0;
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            v.push_back(low);
        ++low;
    }
    for(auto i=v.begin(); i!=v.end(); i++)
        cout<<*i<<" ";

    return 0;
}
