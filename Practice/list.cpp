#include<iostream>
#include<iterator>
#include<list>
using namespace std;

void showlist(list <int> g){
    list<int>::iterator it;
    for(it = g.begin(); it != g.end(); it++)
        cout << "\t" << *it;
    cout << endl;
}

int main(){
    list<int> integer_list;
    integer_list.push_front(1);
    integer_list.push_front(2);
    integer_list.push_front(3);
    integer_list.push_back(2);
    integer_list.push_back(3);
    
    showlist(integer_list);

    list<int>:: iterator listIt;
    listIt = integer_list.begin();
    integer_list.insert(++listIt,5);
    showlist(integer_list);

    integer_list.sort();
    showlist(integer_list);
}