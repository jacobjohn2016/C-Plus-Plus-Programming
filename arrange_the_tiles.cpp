#include <iostream>
using namespace std;

int* fin;
int* arr;
int n;

int swp(){
    int temp, i, j, swap = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(arr[i] == fin[j] && i != j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swap++;
            }
        }
    }
    return swap;
}

int main(){
    int i, j, s;
    
    cin >> n;

    arr = new int[n];
    fin = new int[n];

    for(i = 0; i < n; i++)
        cin >> arr[i];

    for(i = 0; i < n; i++)
        cin >> fin[i];

    for(i = 0; i < n; i++){
        if(arr[i] != fin[i])
            s += swp();
    }
    
    cout << s;
}