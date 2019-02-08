#include <iostream>
using namespace std;

void stern(int *barr, int n)
{
    int i, j = 1;

    for (i = 1; j < n; i++)
    {
        int c = barr[i];
        int p = barr[i-1];

        barr[j + 1] = c+p;
        barr[j + 2] = c;
        j = j+2;
    }
}

int main()
{
    int n, i, j;

    cin >> n;

    int *barr = new int[n];
    int *aarr = new int[n];
    barr[0] = 1;
    barr[1] = 1;

    stern(barr, n);

    for (i = 0; i < n; i++)
        cin >> aarr[i];

    for (i = 0; i < n; i++)
    {
        if (barr[i] != aarr[i])
        {
            cout << "No" << endl;
            cout << i + 1;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}