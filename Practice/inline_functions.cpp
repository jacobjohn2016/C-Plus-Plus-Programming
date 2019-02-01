/*
    With an inline function, the compiler tries to expand the code in the 
    body of the function in place of a call to the function.
*/

#include <iostream>
using namespace std;

inline int Max(int x, int y){
    return (x>y)? x:y;
}

int main(){
    cout << "Max (20,10) is " << Max(20,10) << endl;
    cout << "Max (32,14) is " << Max(32,14) << endl;
}