#include <bits/stdc++.h>
using namespace std;

int countingValleys(int steps, string path)
{
    int sum = 0, res=0;
    for(int i=0; i<steps; i++)
    {
        if(path[i] == 'U')
        {
            sum++;
            if(sum == 0)
                res++;
        }
        if(path[i] == 'D')
            sum--;
    }

    return res;

}

int main()
{
    int steps;
    cin>>steps;
    char path[steps];
    cin>>path;

    int result = countingValleys(steps, path);
    cout<< result << "\n";

    return 0;
}
