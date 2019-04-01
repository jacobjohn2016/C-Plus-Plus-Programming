#include<iostream>
using namespace std;

class Distance{
    private:
        int feet, inches;
    public:
        Distance(int feet, int inches);
        Distance operator!(){
            feet = -feet;
            inches = -inches;
            return Distance(feet,inches);
        }
        void display();
};

Distance::Distance(int feet, int inches){
    this->feet=feet;
    this->inches=inches;
}

void Distance::display(){
    cout << "inches = " << inches << endl << "feet = " << feet << endl; 
}

int main(){
    Distance d1(10,20);
    !d1;
    d1.display();
}