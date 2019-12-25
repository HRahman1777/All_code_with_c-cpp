#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void countVowels(string );
int main()
{
    string str;
    getline(cin, str);
    countVowels(str);

    return 0;
}

void countVowels(string s)
{
    int l = s.length();
    int count = 0;
    for(int i = 0; i < l; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            count++;
            //s.erase(remove(s.begin(), s.end(), ('a')), s.end());
        }
    }
    s.erase(remove(s.begin(), s.end(), ('a')), s.end());
    s.erase(remove(s.begin(), s.end(), ('e')), s.end());
    s.erase(remove(s.begin(), s.end(), ('i')), s.end());
    s.erase(remove(s.begin(), s.end(), ('o')), s.end());
    s.erase(remove(s.begin(), s.end(), ('u')), s.end());
    cout<<"Number of Vowels: "<<count<<endl;
    cout<<s;

}
