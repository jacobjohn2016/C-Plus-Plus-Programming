#include<iostream>
using namespace std;

template <typename T> inline T const& Max(T const& x,T const& y){
    return (x>y)? x:y;
}

int main(){
    cout << Max<int>(10,20) << endl;
    
}