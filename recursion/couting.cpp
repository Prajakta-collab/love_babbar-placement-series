#include<iostream>
using namespace std;
void printFun(int n){
    //base case
    if(n==0){
        return;
    }
   printFun(n-1);
   
    cout<<n<<" ";
    
}

int main(){
    int n;
    cin>>n;

     printFun(n);
}