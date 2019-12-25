#include<iostream>
using namespace std;
int factorial(long long int);
int main()
{
    long long int n;
    cout<<"Enter a number to find factorial: ";
    cin >> n;
    cout << "Factorial of " << n <<" = " << factorial(n);
    return 0;
}
int factorial(long long int n)
{
    if (n > 1)
    {
        long long int num = n*factorial(n-1);
        cout<<num<<"\n";
        return num;
    }
    else
    {
        return 1;
    }
}
