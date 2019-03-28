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

#include <iostream>
using namespace std;

class Line{
    public: 
        int getLength(void);
        Line(int len);                  //simple constructor
        Line(const Line &obj);          //copy constructor
        ~Line();                        //destructor

    private:
        int *ptr;
};

Line::Line(int len){

}

//main function
int main(){
    Line line(10);
    Line line2 = line; //this always calls the copy constructor
    display(line);
    display(line2);

    return 0;
}