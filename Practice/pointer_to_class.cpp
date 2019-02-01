/*
    A pointer to a class is done exactly the same way a pointer to a structure is. 
    In fact a class is really just a structure with functions in it.
*/
#include <iostream>
using namespace std;

class Box
{
  public:
    // Constructor definition
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
    }
    double Volume()
    {
        return length * breadth * height;
    }

  private:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
};

int main(void){
    Box box1(10.54,42.3,42.2);
    Box box2(8.5,2.2,7.3);
    Box *ptrBox;

    // Save the address of first object
    ptrBox = &box1;
    // Now try to access a member using member access operator
    cout << "Volume of Box1: " << ptrBox->Volume() << endl;

    // Save the address of second object
    ptrBox = &box2;

    // Now try to access a member using member access operator
    cout << "Volume of Box2: " << ptrBox->Volume() << endl;

    return 0;
}