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
    cout << (*num).i << endl;
}