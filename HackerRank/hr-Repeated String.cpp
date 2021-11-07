#include <bits/stdc++.h>
using namespace std;


long long int repeatedString(string s, long long int n)
{
   int siz = s.size(), aCnt=0;
   for(int i=0; i<siz; i++)
   {
       if(s[i] == 'a')
       {
           aCnt++;
       }
   }

   long long int diff = n/siz;
   long long int diffM = n%siz;

   long long int res = diff*aCnt;

   for(int i=0; i<diffM; i++)
   {
       if(s[i] == 'a')
        res++;
   }

   return res;

}

int main()
{
    string s;
    getline(cin, s);
    long long int n;
    cin>>n;

    long long int result = repeatedString(s, n);

    cout << result << "\n";

    return 0;
}
