#include <iostream>
using namespace std;

class Line{
    public:
        void setLength(double len);
        double getLength(void);
        Line(double len);                     //this is a constructor
        ~Line(void);                              //this is a destructor
    private:
        double length;
};

//Member functions definition including constructor
Line::Line(double len){
    cout << "Object is being created!" << endl;
    length = len;
}

/* equivalent to above constructor
    Line:line(double len): length(len){
        cout << "Object is being created!" << endl;   
    }
*/

Line::~Line(void){
    cout << "Object is being destroyed!" << endl;
}
void Line::setLength(double len){
    length = len;
}
double Line::getLength(void){
    return length;
}

//Main function for the program
int main(){
    Line line(100);
    cout << "Length of the line is " << line.getLength() << endl;

    //set line length
    line.setLength(10.2);
    cout << "Length of the line is " << line.getLength() << endl;
    
    return 0;
}