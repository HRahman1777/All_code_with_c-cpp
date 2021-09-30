#include<bits/stdc++.h>
using namespace std;

class Animal
{
public:
    void animalSound()
    {
        cout<<"The animal makes sound"<<endl;
    }
};

class Pig: public Animal
{
public:
    void animalSound()
    {
        cout<<"Pig sounds weee weee"<<endl;
    }
};

class Dog: public Animal
{
public:
    void animalSound()
    {
        cout<<"Dog sounds geww geww"<<endl;
    }
};

int main()
{
    //exmpl of overriding with difference classes..
    //if we do in same class with same methods with difference parameters then it will be overloading
    Animal animal1;
    Pig pig1;
    Dog dog1;

    animal1.animalSound();
    pig1.animalSound();
    dog1.animalSound();

    return 0;
}

