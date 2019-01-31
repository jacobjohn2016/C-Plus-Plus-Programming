#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k, min[5];
    int *arr;

    cin >> n;
    arr = new int[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];

    k = 0;
    for (i = 0; i < n; i++)
    {
        min[k] = arr[i];
        for (j = i; j < n; j++)
        {
            if (min[k] < arr[j])
            {
                min[k] = arr[j];
                break;
            }
        }
        if (min[k] == arr[i])
        {
            k = k + 1;
            continue;
        }
        else if (i == n - 1 && min[k] == arr[i])
        {
            cout << "No Leaders";
            return 0;
        }
    }
    i = k-1;

    for(k = 0; k < i; k++)
        cout << min[k] << "\n";
}