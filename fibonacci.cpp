#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 1 || n == 0)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n, i;
    cin >> n;

    for (i = 0; i < n; i++)
        cout << fib(i) << " ";
}