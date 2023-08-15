//
// Created by vedant raikar on 15-08-2023.
//

#include<iostream>
using namespace std ;
#define n 100
class stack{
    int* arr;
    int top  ;

public:
    stack(){
        arr = new int[n];
        top = -1 ;
    }

    void push(int x){
        if(top == n -1 ){
            cout << "Stack overflow" << endl ;

        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout <<"the stack is empty";
        }
        top--;

    }

    int topp() {
        if(top == -1 ){
            cout<< "the stack is empty";
            return -1 ;
        }
        else{
            return arr[top];
        }
    }

    bool empty(){
        if(top == -1){
            return true ;
        }
        else{
            return false ;
        }
    }
};

int main() {
    stack st ;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.topp()<<endl ;
    st.pop();
    cout<<st.topp()<<endl ;

    return 0;
}

