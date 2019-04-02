#include<iostream>
using namespace std;
#include<string>
#include<map>

struct guest{
    int room_No;
    string name;
    int friend_Room_No;
    public:
        void get();
};

class hotel{
    int num_Of_Guests;
    map<int,guest> stay_Det;
    int first_Room_No;
    public:
        void get();
        void serve_Coffee();
};

void guest::get(){
    cin >> room_No >> name >> friend_Room_No;
}

void hotel::get(){
    guest g;
    cin >> num_Of_Guests;
    for(int i = 0; i < num_Of_Guests; i++){
        g.get();
        stay_Det[g.room_No] = g;
    }
    cin >> first_Room_No;
}

void hotel::serve_Coffee(){
    int k = first_Room_No;
    while(k!=-1){
        cout << stay_Det[k].name << "\t" << k << endl;
        k = stay_Det[k].friend_Room_No;
    }
}

int main(){
    hotel h;
    h.get();
    h.serve_Coffee();
}