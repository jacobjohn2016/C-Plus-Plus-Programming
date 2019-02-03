#include <iostream>
using namespace std;

int main() {
    double *pvalue = NULL;      //pointer initialized with null
    pvalue = new double;        //request memory for the variable

    if (!(pvalue = new double)){
        cout << "Error out of memory" << endl;
        exit(1);
    }
    *pvalue = 3198.31;          //store value at allocated address
    cout << "Value of pvalue is = " << *pvalue << endl;

    delete pvalue;              //free up memory

    return 0;   
}