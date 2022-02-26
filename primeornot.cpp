#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int check=0;
    for(int i=2;i<=n-1;i++){
        while(n%i==0){
            check=1;
            break;
        }
    }
    if(check==0){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}