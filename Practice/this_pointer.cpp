//Every object has a special pointer this which points to the object itself.
//Friend functions do not have a this pointer, because friends are not members of a class. 
//Only member functions have a this pointer.

#include <iostream>
using namespace std;

class Box{
    public:
        //Constructor definition
        Box(double l = 2.0, double b = 2.0, double h = 2.0)
        {
            cout << "Constructor Called" << endl;
            length = l;
            breadth = b;
            height = h;
        }

        double Volume()
        {
            return length * breadth * height;
        }

        int compare(Box box){
            return this->Volume() > box.Volume();
        }

    private:
        double length, breadth, height;
};

int main(){
    Box box1(10.2,32.1,51.2);
    Box box2(21.3,6.3,8.4);

    cout << "Volume of Box 1: " << box1.Volume() << endl;
    cout << "Volume of Box 2: " << box2.Volume() << endl;

    cout << "Box 1 > Box 2?: " << box1.compare(box2) << endl;
}