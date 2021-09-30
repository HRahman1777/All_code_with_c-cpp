#include<bits/stdc++.h>
using namespace std;

class Student
{
private:
    float cgpa;

public:
    void setCgpa(float c)
    {
        cgpa = c;
    }
    float getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    Student st1;
    st1.setCgpa(3.66);
    cout<<st1.getCgpa()<<endl;

    return 0;
}
