#include <bits/stdc++.h>
using namespace std;


int main()
{
    int row, col;
    cin>>row>>col;

    vector <vector<int> > v;

    v.resize(col, vector<int>(row));

    /** input from use **/
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>v[i][j];
        }
    }
    /** output from use **/
    cout<<"\nOutput: \n";

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

