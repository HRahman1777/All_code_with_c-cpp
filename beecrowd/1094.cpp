#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int tc, am, c=0, s=0, r=0;
    char ch;
    int total = 0;
    cin >> tc;
    for(int i = 0; i < tc; i++)
    {
        cin >> am;
        cin >> ch;

        total += am;
        if(ch == 'C')
            c += am;
        if(ch == 'S')
            s += am;
        if(ch == 'R')
            r += am;
    }
    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << c << "\n";
    cout << "Total de ratos: " << r << "\n";
    cout << "Total de sapos: " << s << "\n";
    float t1, c1, s1, r1;
    t1=total; c1=c; s1=s; r1=r;
    printf("Percentual de coelhos: %.2f %%\n", (c1/t1)*100.00);
    printf("Percentual de ratos: %.2f %%\n", (r1/t1)*100.00);
    printf("Percentual de sapos: %.2f %%\n", (s1/t1)*100.00);


    return 0;
}

