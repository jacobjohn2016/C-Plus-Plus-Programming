#include<iostream>
#include<string.h>
using namespace std;

class Customer{
    public:
        static int count;
        //constructor definition
        Customer(int regno, char *name){
            cout << "Customer called" << endl;
            reg = regno;
            strcpy(nm,name);

            //increment everytime constructor is called
            count++;
        }

        static int getCount(){
            return count;
        }

        void getDetails(){
            cout << "Reg. No.: " << reg << endl;
            cout << "Name: " << nm << endl;
        }

    private:
        int reg;
        char nm[100];
};

int Customer::count = 0;

int main(){
    cout << "Initial Stage count " << Customer::getCount() << endl;

    char n[] = "Jacob";
    Customer c1(1,n);
    strcpy(n,"John");
    Customer c2(2,n);

    c1.getDetails();
    c2.getDetails();
    cout << "Final count " << Customer::getCount() << endl;

    return 0;
}