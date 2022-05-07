#include<iostream>
using namespace std;
void printFun(int n){
    //base case
    if(n==0){
        return;
    }
  
   
    cout<<n<<" ";
     printFun(n-1);
}

int main(){
    int n;
    cin>>n;

     printFun(n);
}