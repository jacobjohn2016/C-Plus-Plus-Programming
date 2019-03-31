#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
using namespace std;

template <class T> class Stack{
    private:
        vector<T> elems;
    public:
        void push(T x);
        void pop();
        T top();

        bool empty(){
            return elems.empty();
        }
};

template <class T> void Stack<T>::push(T x){
    elems.push_back(x);
}

template <class T> void Stack<T>::pop(){
    if(elems.empty()){
        throw "Stack<>::pop(): empty stack"; 
    }
    else{
        elems.pop_back();
    }
}

template <class T> T Stack<T>::top(){
    if(elems.empty()){
        throw "Stack<>::top(): empty stack";
    }
    else{
        return elems.back();
    }
}

int main(){
    try {
      Stack<int> intStack;  // stack of ints 
      Stack<string> stringStack;    // stack of strings 

      // manipulate int stack 
      intStack.push(7); 
      cout << intStack.top() <<endl; 

      // manipulate string stack 
      stringStack.push("hello"); 
      cout << stringStack.top() << endl; 
      stringStack.pop(); 
      stringStack.pop(); 
   } catch (const char* ex) { 
      cout << "Exception: " << ex <<endl; 
      return -1;
   } 
}