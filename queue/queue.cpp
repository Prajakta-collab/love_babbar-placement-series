#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;

    q.push(18);
    q.push(10);

    cout<<q.size()<<endl;
    cout<<q.front()<<endl;

    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.size()<<endl;

    cout<<q.empty();
}