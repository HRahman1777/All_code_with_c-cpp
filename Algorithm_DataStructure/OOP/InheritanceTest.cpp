#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    string brandname = "Ford";
    void honk()
    {
        cout << "tuut tuuut!" << endl;
    }
};

class Car : public Vehicle
{
public:
    string model = "Mustang";
};

int main()
{
    Car car1;
    car1.honk();
    cout << car1.brandname + " - " + car1.model << endl;

    return 0;
}
