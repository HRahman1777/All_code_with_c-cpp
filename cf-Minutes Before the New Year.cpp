#include<iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int h,m,sm, rs;
        cin>>h>>m;
        sm = (h*60)+m;
        rs = 1440 - sm;
        cout<<rs<<endl;
    }

    return 0;
}
