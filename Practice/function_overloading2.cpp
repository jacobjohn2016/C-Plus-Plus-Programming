#include <iostream>
using namespace std;

class printData{
    public:
        void print(int i){
            cout << "Printing int: " << i << endl;
        }
        void print(double f){
            cout << "Printing double: " << f << endl;
        }
        void print(char *c){
            cout << "Printing character: " << c << endl;
        }
};

int main(void){
    printData pd;

    // call print to print integer
    pd.print(5);

    // call print to print double
    pd.print(100.23);

    // call print to print character
    pd.print("Hello C++");

    return 0;
}