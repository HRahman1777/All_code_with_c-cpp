#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    int id;
    double salary;
    string name;
    static int count;
    void insert(int i, double s, string n)
    {
        count++;
        id = i;
        salary = s;
        name = n;
    }
    void display()
    {
        cout << id << " " << name << " " << salary << endl;
        cout << "Inserted " << count << " times\n";
    }

    Person() // defualt,,.. we can add use like insert func then it will be paramentiz constructor.
    {
        cout << "\nDefault Constructor created\n";
    }
    ~Person() // use to destruct object,,,
    {
        cout << "\nDestructor applied\n";
    }
};

int Person::count = 0;

int main()
{
    Person p1;
    p1.insert(1, 10000.00, "Test1");
    p1.display();
    p1.insert(2, 20000.00, "Test2");
    p1.display();

    return 0;
}