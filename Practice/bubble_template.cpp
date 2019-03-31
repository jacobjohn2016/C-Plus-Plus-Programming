#include<iostream>
using namespace std;

template <typename T> void bubbleSort(T a[], int n){
    for(int i = 0; i < n; i++)
        for(int j = n-1; i < j; j--)
            if(a[j] < a[j-i])
                swap(a[j],a[j-1]);
}

int main(){
    int a[5] = {10, 50, 30, 40, 20};
    int n = sizeof(a) / sizeof(a[0]);

    // calls template function
    bubbleSort(a, 5);

    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}