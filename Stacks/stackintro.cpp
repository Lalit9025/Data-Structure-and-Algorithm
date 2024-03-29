#include<bits/stdc++.h>
using namespace std;

int main() {
    //LIFO - last in first out
    //creation of stack
    stack<int> s;

    //push operation
    s.push(5);
    s.push(4);

    //pop operation
    s.pop();

    //top element
    cout<<"top element : "<<s.top()<<endl;;

    //checking stack is empty or not
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    } else{
        cout<<"stack is not empty"<<endl;
    }

    //checking the size
    cout<<"size of array : "<<s.size()<<endl;


    return 0;
}