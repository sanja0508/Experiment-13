//Program-2
#include<iostream>
using namespace std;

class Student 
{
    string name;
    int age;

public:
    // 1. Default constructor
    Student() 
{
        name = "Unknown";
        age = 18;
    }

    // 2. Parameterized constructor
    Student(string n, int a) 
{
        name = n;
        age = a;
    }

    // 3. Copy constructor
    Student(const Student &s) 
{
        name = s.name;
        age = s.age;
    }

    void display() 
{
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() 
{
    Student s1;                 // default constructor
    Student s2("Saraswathi", 20); // parameterized constructor
    Student s3(s2);             // copy constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
