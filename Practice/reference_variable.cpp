#include<iostream>
using namespace std;

int main()
{
    int num1;
    int &num2 = num1;
    num1 = 0;
    cout << "Num 1 = " << num1 << " Num 2 = " << num2 << endl;
    num2 = 1;
    cout << "Num 1 = " << num1 << " Num 2 = " << num2 << endl;
}