#include<bits/stdc++.h>

using namespace std;

class Stack{
    //properties
    public:
        int *arr;
        int top;
        int size;
    // behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(top < size-1){ // or size-top > 1
            top++;
            arr[top] = element;
        } else {
            cout<<"stack overflow"<<endl;
        }
    };
    void pop(){
        if(top >= 0){
            top--;
        } else{
            cout <<"Stack underflow"<<endl;
        }
    };
    int peek(){
        if(top>=0){
            return arr[top];
        } else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    };
    bool isEmpty(){
        if(top == -1){
            return true;
        } else{
            return false;
        }
    }

};

int main() {

    Stack st(5);

    st.push(5);
    st.push(3);
    st.push(4);

    cout<<"top element : "<<st.peek()<<endl;

    st.pop();

    cout<<"top element : "<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"stack is empty"<<endl;
    } else {
        cout<<"stack is not empty"<<endl;
    }

    
    return 0;
}