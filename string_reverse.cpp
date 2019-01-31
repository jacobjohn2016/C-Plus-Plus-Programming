#include <iostream>
using namespace std;

void rev(char *arr){
    if(*arr){
        rev(arr+1);
        cout << *arr;
    }

}

int main(){
    char str[100];
    cin >> str;
    rev(str);
}