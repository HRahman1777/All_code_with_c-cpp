#include<iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    //int n = tc >> 1;
    int a = 30;
    while(a){
    int n = a & tc;
    cout<<"a="<<a<<" / "<<n<<endl;
    a--;
    }
    return 0;
}
