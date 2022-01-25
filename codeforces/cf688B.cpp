#include <iostream>
using namespace std;

int main()
{
    string arr;
    cin >> arr;
    for (int i = arr.size()-1; i >= 0; i--)
    {
        arr = arr + arr[i];
    }
    cout << arr;

    return 0;
}
