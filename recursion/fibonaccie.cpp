#include<iostream>
using namespace std;

int fibo(int n){
    //base case for
    if(n==0) 
        return 0;
    if(n==1 || n==2 )
        return 1;
    

    //recursive call
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    cin>>n;

    cout<<fibo(n);
}