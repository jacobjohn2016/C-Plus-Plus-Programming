#include<iostream>
using namespace std;

class Box{
    public:
        Box(){
            cout<<"Constructor called!"<<endl;
        }
        ~Box(){
            cout<<"Destructor called!"<<endl;
        }
};

int main(){
    Box *arr = new Box[4];      //creating an array of class Box
    delete [] arr;              //deleting array of Box objects

    return 0;
}