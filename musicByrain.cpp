#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void mac();

int main()
{
    int z;
    scanf("%d", &z);
    while(z--)
    {
        mac();
        cout<<"\n";

    }
    return 0;

}
void mac()
{
        char pot[200], pot2[200];
        cin>>pot;
        cin>>pot2;
        int s = strlen(pot);
        int s2 = strlen(pot2);

        for(int i=0; i<s; i++)
        {
            if(pot[i] =='a' || pot[i]=='e' || pot[i]=='i' || pot[i]=='o' || pot[i]=='u')
                pot[i] = '*';
        }
        for(int i=0; i<s2; i++)
        {
            if(pot2[i] =='a' || pot2[i]=='e' || pot2[i]=='i' || pot2[i]=='o' || pot2[i]=='u')
                pot2[i] = '*';
        }
        char c = '*';
        for(int i=0; i<s; i++)
        {
            for(int j=0; j < s2; j++)
            {
                if( pot[i] == pot2[j])
                {
                    if(pot[i] != c)
                        cout<<pot[i];
                    break;
                }
            }
        }
}
