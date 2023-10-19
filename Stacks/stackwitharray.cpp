
#include <bits/stdc++.h> 
using namespace std;

class Stack{

//! Private Data Members
    int capacity;
    int* arr;
    int top;

    public:
    //! Declaring Size of Stack
    Stack(int c){
        this->capacity = c; 
        arr = new int[c];
        this->top = -1;
    }

//! Adding a Data in Stack
    void push(int data){

        if(this->top == this->capacity-1){
            cout<<"Overflow";
            return;
        }
        this->top++;
       this->arr[this->top] = data;
    }

//! Removing or Popping Data from Stack
    void pop(){

        if(this->top == -1){
            cout<<"Underflow";
            return;
        }
        this->top--;

    }

//! Getting Top of the Stack
    int getTop(){
        if(this->top == -1){
            cout<<"Underflow";
            return INT_MIN;
        }

        return this->arr[this->top];
    }

//! Check whether Stack is Empty or not
    bool isEmpty(){
        return this->top == -1;
    }

//! Check Size of Stack
    int size(){
        return this->top + 1;
    }

//! Check whether Stack is Full empty or not
    bool isFull(){

       return this->top == this->capacity-1;

    }


};

int main(){

    Stack st(3);

    cout<<st.isEmpty()<<endl;

    st.push(6);
    st.push(8);
    st.push(0);

    cout<<st.getTop()<<endl;
    
    st.pop();
    st.push(7);

    cout<<st.getTop()<<endl;

    st.push(5);

    cout<<st.getTop()<<endl;

    return 0;

}