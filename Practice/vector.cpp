#include<iostream>
#include<iterator>
#include<vector>
#include<string>
#include<functional>
#include<numeric>
using namespace std;

void show(vector<int> g)
{
    vector<int>::iterator it;
    for (it = g.begin(); it != g.end(); it++)
        cout << "\t" << *it;
    cout << endl;
}

void show(vector<string> g)
{
    vector<string>::iterator it;
    for (it = g.begin(); it != g.end(); it++)
        cout << "\t" << *it;
    cout << endl;
}

int main(){
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    show(vec);
    sort(vec.begin(),vec.end());
    show(vec);

    cout << "\t" <<accumulate(vec.begin(),vec.end(),0) << endl;
    cout << "\t" <<accumulate(vec.begin(), vec.end(),1,multiplies<int>()) << endl;

    vector<string> v;
    v.push_back("How");
    v.push_back("Hello");
    v.push_back("World");
    sort(v.begin(), v.end());
    show(v);
}