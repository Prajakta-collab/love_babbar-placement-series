#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int key){
    //base case 
    if(n==0){
        return false;
    }
    if(arr[0]==key)
    {
        return true;

    }

    return linearSearch(arr+1,n-1,key);
}

int main(){
    int arr[]={1,4,24,3,0};
    int n=5;
    int key=2;
    cout<<linearSearch(arr,n,key);
}