#include <iostream>
using namespace std;

int main(){
    int n, i, min, min2;
    int* arr;

    cin >> n;   
    arr = new int[n];

    min = 10000000;
    for(i = 0; i < n; i++){
        cin >> arr[i];
        if(min > arr[i])
            min = arr[i];
    }

    min2 = 10000000;
    for(i = 0; i < n; i++){
        if(arr[i] == min)
            continue;
        else if(min2 > arr[i])
            min2 = arr[i];
    }

    cout << min2;
}