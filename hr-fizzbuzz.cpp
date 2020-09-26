#include<iostream>
using namespace std;

void fizzBuzz(int t)
{
    for(int i=1; i<=t; i++)
    {
        if(i%3==0 && i%5==0)
            cout<<"FizzBuzz"<<endl;
        if(i%3==0 && i%5!=0)
            cout<<"Fizz"<<endl;
        if(i%3!=0 && i%5==0)
            cout<<"Buzz"<<endl;
        if(i%3!=0 && i%5!=0)
            cout<<i<<endl;
    }
}


int main()
{

    int tc;
    cin>>tc;
    fizzBuzz(tc);
    return 0;
}

