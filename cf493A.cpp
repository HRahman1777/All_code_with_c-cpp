#include<bits/stdc++.h>
using namespace std;
int main()
{
    string home, away;
    cin>>home>>away;
    int n;
    cin>>n;
    map<int, int> a;
    map<int, int> h;
    map<int, int> bListh;
    map<int, int> bLista;
    int min;
    char ch;
    int num;
    char card;
    while(n)
    {
        cin>>min>>ch>>num>>card;

        if(ch=='h'&&card=='r' && (bListh.count(num)==0))
        {
            bListh[num] = 1;
            cout<<home<<" "<<num<<" "<<min<<endl;
        }
        else if(ch=='a'&&card=='r' && (bLista.count(num)==0))
        {
            bLista[num] = 1;
            cout<<away<<" "<<num<<" "<<min<<endl;
        }
        else if(ch=='h' && card=='y' && (bListh.count(num)==0))
        {
            if(h.count(num)==0)
            {
                h[num]=1;
            }
            else if(h[num]==1)
            {
                h[num]=2;
                bListh[num] = 1;
                cout<<home<<" "<<num<<" "<<min<<endl;
            }
            else if(h[num]==2)
            {
                h[num]=1;
            }
        }
        else if(ch=='a'&&card=='y' && (bLista.count(num)==0))
        {
            if(a.count(num)==0)
            {
                a[num]=1;
            }
            else if(a[num]==1)
            {
                a[num]=2;
                bLista[num] = 1;
                cout<<away<<" "<<num<<" "<<min<<endl;
            }
            else if(a[num]==2)
            {
                a[num]=1;
            }
        }

        n--;
    }
    return 0;
}
