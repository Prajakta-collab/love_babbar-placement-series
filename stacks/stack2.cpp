#include<iostream>
using namespace std;
class Stack{
    public:
    //data members
    int* arr;
    int top;
    int size;

    //member functions
    //constructor
    Stack(int size){
        this->size=size;
        this->top=-1;
        this->arr=new int[size-1];

    }

    void push(int data){
        //check ki space ahe ki nhi 
        if(size-top>0){
            top++;
            arr[top]=data;
        }else{
            cout<<"stack overflow"<<endl;
        }
    }


    int pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl; 
        }else{
            int value=arr[top];
            top--;
            return value;
        }
    }

    int peek(){

    if(top==-1){
            cout<<"stack is empty"<<endl; 
        }else{
            int value=arr[top];
            return value;
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
    Stack s(4);
    s.push(20);
    s.push(18);
    s.push(19);
    cout<<s.peek()<<endl;

   s.push(12);
   s.push(12);
   s.push(17);
     cout<<s.peek()<<endl;
}