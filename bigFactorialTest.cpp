#include<iostream>
#include<stdio.h>
using namespace std;

#define MAX 500


int main()
{
    int n=5;
    int res[MAX];

    res[0] = 1;
    int res_size = 1;

    for (int x=2; x<=n; x++)
    {
        int carry = 0;
        cout<<"\n\nThis is x:"<<x<<endl;
        // One by one multiply n with individual digits of res[]
        for (int i=0; i<res_size; i++)
        {
            printf("x: %d   i: %d   res[i]: %d   carry: %d\n", x, i, res[i], carry);
            int prod = res[i] * x + carry;
            cout<<"value prod:"<<prod<<endl;
            // Store last digit of 'prod' in res[]
            res[i] = prod % 10;
            cout<<"res[i]:"<<res[i]<<endl;
            // Put rest in carry
            carry = prod/10;
        }
        cout<<"while--------"<<endl;
        while (carry)
        {
            printf("res_size: %d  carry: %d\n\n", res_size, carry);
            res[res_size] = carry%10;
            carry = carry/10;
            res_size++;
        }
    }

    cout << "Factorial of given number is \n";
    for (int i=res_size-1; i>=0; i--)
        cout << res[i];

    return 0;
}

