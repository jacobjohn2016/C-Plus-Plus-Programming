#include<iostream>
using namespace std;

int main()
{
    int n, m, i;
    int *arr;

    cin >> n;
    arr = new int[n];

    cin >> m;

    for(i = 0; i < n; i++)
        cin >> arr[i];

    for(i = 0; i < n; i++)
        cout << arr[(n - m + i) % n] << "\n";
    
    return 0;
}