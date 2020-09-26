#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec;
    vector<int>::iterator it;
    int testCase1, testCase2;
    cin>>testCase1;
    for(int i=0; i<testCase1; i++)
    {
        int num;
        cin>>num;
        vec.push_back(num);
    }
    cin>>testCase2;
    for(int i=0; i<testCase2; i++)
    {
        int sear;
        cin>>sear;
        it = lower_bound(vec.begin(), vec.end(), sear);
        if(vec[it-vec.begin()] == sear){
            cout<<"Yes "<<(it-vec.begin())+1<<endl;
        }else
        cout<<"No "<<(it-vec.begin())+1<<endl;
        /*
        it = find(vec.begin(), vec.end(), sear);
        if(it != vec.end())
        {
            cout<<"Yes "<<(it-vec.begin())+1<<endl;
        }
        else
        {
            int br=1;
            while(br!=0)
            {
                sear++;
                it = find(vec.begin(), vec.end(), sear);
                if(it != vec.end())
                {
                    cout<<"No "<<(it-vec.begin())+1<<endl;
                    br=0;
                }
            }
        }
        */
    }
    return 0;
}
