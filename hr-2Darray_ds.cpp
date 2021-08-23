#include <bits/stdc++.h>
using namespace std;


int main()
{
     int row, col;
    row = 6;
    col = 6;

    vector <vector<int> > v;

    //vector<int> sum(16, 0); *max_element(arr, arr+n);
    int sum[16]={0};

    v.resize(col, vector<int>(row));


    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>v[i][j];
        }
    }

    int iii=0;
    for(int i=0; i<row-2; i++)
    {
        for(int j=0; j<col-2; j++)
        {
            sum[iii] = v[i][j] + v[i][j+1] + v[i][j+2] + v[i+1][j+1] + v[i+2][j] + v[i+2][j+1] + v[i+2][j+2];
            iii++;
        }
    }

    int res = *max_element(sum, sum+16);
            cout<<res<<endl;


    return 0;
}
