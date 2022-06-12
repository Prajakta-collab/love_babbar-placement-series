#include<iostream>
using namespace std;

int factorial(int n){
    //base case 
    if(n==0) 
        return 1;

    //recursive call 
    int choti=factorial(n-1);
    int badi=n*choti;

    return badi;
}

int main(){
    int n;
    cin>>n;

    int ans=factorial(n);

    cout<<ans;
}