#include <iostream>
using namespace std;

class Box{
    private:
        double width;

    public:
        double length;
        friend void printWidth(Box box);
        void setWidth(double wid);
};

void Box::setWidth(double wid){
    width = wid;
}

//Note: printWidth() is not a member function of any class
void printWidth(Box box){
    /* Because printWidth is a friend of class Box, it can
       directly access any member of this class */
    cout << "Width is = " << box.width << endl;
}

int main(){
    Box box;

    box.setWidth(10);

    printWidth(box);
}