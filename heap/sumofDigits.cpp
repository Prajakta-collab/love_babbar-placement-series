#include<iostream>
using namespace std;

int sum(int arr[],int n){
    //base case for
    if(n==1){
        return arr[0];
    }


  
    //cout<<arr[0];

    //recursive call 
    int ans=sum(arr+1,n-1)+arr[0];
    return ans;
}

int main(){
    int arr[]={1,2,3,4};
    int n=4;
   int ans=sum(arr,n);
   cout<<ans;
}