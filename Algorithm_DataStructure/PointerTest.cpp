#include<bits/stdc++.h>
using namespace std;

void test(int *a)
{
    *a = 6;
}


int main()
{
    int x=5;
    ///check 1
    test(&x);
    cout<<x<<endl;


    ///check 2
    int *p;
    *p = x+1;
    cout<<p<<endl;
    cout<<*p<<endl;

    return 0;

    /// only one check work, same variable can't store two different pointers
}
