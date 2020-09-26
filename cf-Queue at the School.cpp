#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int num, time;
    scanf("%d %d\n", &num, &time);

    string line;
    getline(cin, line);

    while(time--)
    {
        int i = num-1;
        while(i >= 0)
        {
            i--;
            if(line[i] == 'B' && line[i+1] == 'G')
            {
                line[i] = 'G';
                line[i+1] = 'B';
                i--;
            }
        }
    }
    cout<<line<<endl;

    return 0;
}
