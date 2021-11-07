#include<bits/stdc++.h>
using namespace std;

int leapYear(int y)
{
    if(y < 1918)
    {
        if(y%4==0)
            return 1;
        else
            return 0;
    }
    else
    {

        if (y % 4 == 0)
        {
            if (y % 100 == 0)
            {
                if (y % 400 == 0)
                    return 1;
                else
                    return 0;
            }
            else
                return 1;
        }
        else
            return 0;
    }
}

int main()
{
    int year, ly;
    cin>>year;

    ly=leapYear(year);

    if(year==1918)
        cout<<"26.09.1918";

    else if(ly)
        cout<<"12.09."<<year;
    else
        cout<<"13.09."<<year;

    return 0;
}
