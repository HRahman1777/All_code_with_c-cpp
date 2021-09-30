#include<bits/stdc++.h>
using namespace std;

void test(int val2) //pass by value, so a copy variable created which not effect on main variable
{
    val2++;
    cout<<"In test: "<<val2<<endl;
}

void test2(int &val3) //pass by ref, so this function updated the main variable.
{
    val3++;
    cout<<"In test2: "<<val3<<endl;
}

void test3(int a[]) ///arrays are always pass by reference, we don't need to use ampersand in c/c++
{
    a[2] = 5;
}

int main()
{
    int val1 = 5;
    cout<<"before: "<<val1<<endl;

    test(val1);
    cout<<"after t: "<<val1<<endl;

    test2(val1);
    cout<<"after t2: "<<val1<<endl;

    int arr[] = {1, 2, 3};
    test3(arr);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

    return 0;
}
