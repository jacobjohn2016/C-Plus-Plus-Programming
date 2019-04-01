/*
 * The copy constructor is a constructor which creates an object by initializing 
 * it with an object of the same class, which has been created previously. 
 * The copy constructor is used to −
 * 1. Initialize one object from another of the same type.
 * 2. Copy an object to pass it as an argument to a function.
 * 3. Copy an object to return it from a function.
 * If a copy constructor is not defined in a class, the compiler itself defines one.
 * If the class has pointer variables and has some dynamic memory allocations, then 
 * it is a must to have a copy constructor.
 * 
*/

#include<iostream>
using namespace std;

class Line{
    private:
        int length;
    public:
        int *ptr;
        Line(int len);
        Line(const Line &obj);
        ~Line();
        void getWidth();
};

Line::Line(int len){
    cout << "Constructor is called" << endl;
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj){
    cout << "Copy constructor is called" << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

void Line::getWidth(){
    cout << "Width is = " << *ptr << endl;
}

Line::~Line(){
    cout << "Calling destructor" << endl;
}

int main(){
    Line line(10);
    Line line2 = line;
    line2.getWidth();

    return 0;
}


