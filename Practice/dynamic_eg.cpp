#include<iostream>
using namespace std;

class Numbers{
    public:
        int i,j;
};

int main(){
    int *arr;
    arr = new int[10];
    delete [] arr;

    Numbers *num;
    num = new Numbers;
    (*num).i = 10;
    cout << num->i << endl;

    Numbers num2;
    num2.i = 20;
    *num = num2;
    cout << (*num).i << endl;
    
    delete num;
}