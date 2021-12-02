#include <bits/stdc++.h>
using namespace std;

void funA(int a)
{
    cout << a << endl;
}

void funA(int a, int b)
{
    cout << a << b << endl;
}

void funA()
{
    cout << "without para" << endl;
}

void funA(double a) // float wont work .. in cpp float treated as double in constants
{
    cout << a << endl;
}

class ClassA
{
public:
    void dis()
    {
        cout << "Class A\n";
    }
};

class ClassB : public ClassA
{
public:
    void dis() // overriding func
    {
        cout << "Class B\n";
    }
};

int main()
{
    funA();
    funA(10);
    funA(10, 20);
    funA(1.2);

    ClassB cb1;
    cb1.dis();

    return 0;
}