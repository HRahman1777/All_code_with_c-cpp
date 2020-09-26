
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int num;
    vector<int> vec;
    vector<int>:: iterator it;

    for(int i=0; i<5; i++)
    {
        cin>>num;
        vec.push_back(num);
    }

    int se=3;
    it=find(vec.begin(), vec.end(), se);
    if(it != vec.end())
        cout<<(it - vec.begin())+1<<" ";

    else
        cout<<"not found!";

    /*   for(int j=0; j<vec.size(); j++)
       {
           cout<<vec[j]<<" ";
       }
    */
    return 0;
}
