#include<iostream>
using namespace std;
class Stack{
    //properties
    public:
    int top;
    int *arr;
    int size;
    
    //behaviour -constructor to initialise
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }else{
            cout<<"stack is full "<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"stack is empty "<<endl;
        }
    }
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }else{
            cout<<"stack is empty "<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }

    }
};
int main(){
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    
    cout<<st.peek()<<endl;
}