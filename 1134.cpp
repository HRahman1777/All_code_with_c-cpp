#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n, a=0, g=0, d=0;
    while(1)
    {
        cin>>n;
        if(n==4)
        {
            cout<<"MUITO OBRIGADO\n";
            cout<<"Alcool: "<<a<<endl;
            cout<<"Gasolina: "<<g<<endl;
            cout<<"Diesel: "<<d<<endl;
            break;
        }
        else if(n==1)
            a++;
        else if(n==2)
            g++;
        else if(n==3)
            d++;
    }

    return 0;
}
