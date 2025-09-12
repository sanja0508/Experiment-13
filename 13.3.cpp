//Program-4
#include<iostream>
using namespace std;

class Volume 
{
    float length;
    float breadth;
    float height;

public:
    // Default constructor
    Volume() 
{
        length = 5;
        breadth = 4;
        height = 3;
    }

    // Parameterized constructor
    Volume(float l, float b, float h) 
{
        length = l;
        breadth = b;
        height = h;
    }

    // Copy constructor
    Volume(Volume &v1) 
{
        length = v1.length;
        breadth = v1.breadth;
        height = v1.height;
    }

    void disp() 
{
        float vol = length * breadth * height;
        cout << "Volume = " << vol << endl;
    }
};

int main() 
{
    Volume v1, v2(6.5, 4.2, 3.1), v3(v1);
    v1.disp();
    v2.disp();
    v3.disp();

    return 0;
}
