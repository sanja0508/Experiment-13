#include<iostream>
using namespace std;

class Box 
{
   private:
    double length;
    double breadth;
    double height;

   public:
    // 1. Constructor with no arguments
    Box() 
{
        length = 5.0;
        breadth = 5.0;
        height = 5.0;
    }

    // 2. Constructor with three arguments
    Box(double l, double b, double h) 
{
        length = l;
        breadth = b;
        height = h;
    }

    // 3. Constructor with one argument (cube case)
    Box(double side) 
{
        length = breadth = height = side;
    }

    double calculateVolume() 
{
        return length * breadth * height;
    }
};

int main() 
{
    Box b1;              // No arguments
    Box b2(10.5, 7.2, 5.5); // Three arguments
    Box b3(6.0);         // One argument

    cout << "When no argument is passed:" << endl;
    cout << "Volume of Box = " << b1.calculateVolume() << endl;

    cout << "\nWhen (10.5, 7.2, 5.5) is passed:" << endl;
    cout << "Volume of Box = " << b2.calculateVolume() << endl;

    cout << "\nWhen only one side (6.0) is passed (cube):" << endl;
    cout << "Volume of Box = " << b3.calculateVolume() << endl;

    return 0;
}
