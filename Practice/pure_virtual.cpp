#include<iostream>
using namespace std;

class Base{
    public:
        virtual void print() = 0;
};

class Derived: public Base{
    virtual void print(){
        cout << "In derived" << endl;
    }
};

int main(void){
    Base *bptr = new Derived();
    bptr -> print();

    return 0;
}