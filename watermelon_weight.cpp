#include <iostream>
using namespace std;

int main()
{
    float x, p1, p2, c;
    cin >> x >> p1 >> p2 >> c;
    cout << (((x * (100 - p1)) / 100) / ((100 - p2) / 100)) * c;
}