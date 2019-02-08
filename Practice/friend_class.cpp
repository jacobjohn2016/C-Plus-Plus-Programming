#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        A(int i = 0){
            a = i;
        }
        friend class B;     // Friend class
};

class B{
    private:
        int b;
    public:
        void showA(A &x){
            // Since B is friend of A, it can access
            // private members of A
            cout << "A::a = " << x.a << endl;
        }
};

int main(){
    A a(100);
    B b;
    b.showA(a);
    return 0;
}