#include<iostream>
using namespace std;

void saydigit(int num,string arr[]){
    //base case
    if(num==0)
        return;

    //processing
    int rem=num%10;
    int n=num/10;




    //recursive call
    saydigit(n,arr);
    cout<<arr[rem]<<" ";
}

int main(){
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    saydigit(n,arr);
}