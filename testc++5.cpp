#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int>mp;
    mp.insert({2, 30});//add kora
    mp.insert({1, 60});
    mp.insert({50, 700});
    mp[4] = 70; //doi babhaie add kora jai

    if(mp.count(2))
        cout<<"#1found\n"; // TRUE
    if(mp.count(4))
        cout<<"#2found\n"; //true
    if(mp.count(70))        //False
        cout<<"#3found\n";
    // mane sudu index khujbo.. ar ame value ja khusi dakhte parmo

    return 0;
}
