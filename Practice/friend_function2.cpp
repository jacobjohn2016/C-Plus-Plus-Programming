#include<iostream>
using namespace std;

class Customer{
    private:
        int custNum;
        double balanceDue;
        friend void displayAsFriend(Customer); //Friend function declaration

    public:
        Customer(int = 0, double = 0.0);
        void displayCustomer();
};

Customer::Customer(int num, double balance){  //constructor
    custNum = num;
    balanceDue = balance;
}

void Customer::displayCustomer(){
    cout << "In the member function" << endl;
    cout << "Customer #: " << custNum << " has a balance of $" << balanceDue << endl;
}

void displayAsFriend(Customer cust){
    cout << "In friend function" << endl;
    cout << "Customer #: " << cust.custNum << " has a balance of $" << cust.balanceDue << endl;
}

int main(){
    Customer c(3815, 359.23);
    c.displayCustomer();
    displayAsFriend(c);

    return 0;
}