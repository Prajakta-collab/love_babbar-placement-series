#include<iostream>
#include<stack>
using namespace std;

int main(){

//creation of stack 
stack<int> s;


//push
s.push(20);
s.push(10);

s.pop();

cout<<s.top()<<endl;

cout<<s.empty();
}