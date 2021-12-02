#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    int id;
    double salary;
    string name;
    void insert(int i, double s, string n)
    {
        id = i;
        salary = s;
        name = n;
    }
    void display()
    {
        cout << id << " " << name << " " << salary << endl;
    }
    int add()
    {
        return 5;
    }
};

class Employee : private Person
{
public:
    void dis()
    {
        cout << add();
    }
};

int main()
{
    Person p1;
    p1.insert(1, 10000.00, "Test1");
    p1.display();
    p1.insert(2, 20000.00, "Test2");
    p1.display();
    Employee e1;
    e1.dis();

    return 0;
}