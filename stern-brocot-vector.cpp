#include <iostream>
#include "/Users/jacobjohn/stdc++.h"
using namespace std;

void stern(vector<int>& barr, int n){
    for(int i = 1; barr.size() < n; i++){
        int c = barr[i];
        int p = barr[i-1];

        barr.push_back(c+p);
        barr.push_back(c);
    }
}

int main()
{
    int n, i, j;
    vector<int> aarr;
    vector<int> barr;

    cin >> n;

    barr.push_back(1);
    barr.push_back(1);

    stern(barr, n);

    for(i = 0; i < n; i++){
        cin >> j;
        aarr.push_back(j);
    }
    for (i = 0; i < n; i++)
    {
        if(barr[i] != aarr[i]){
            cout << "No" << endl;
            cout << i+1;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}