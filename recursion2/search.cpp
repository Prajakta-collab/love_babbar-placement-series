#include<iostream>
using namespace std;

int search(int arr[],int size,int n){
//base case: size
if(size==0) return false;
if(arr[0]==n){
    return true;
}else{
    int remaininingPart=search(arr+1,size-1,n);
    return remaininingPart;
}
}

int main(){
    int arr[4]={1,4,2,0};
    int target=6;

    cout<<search(arr,4,target);
}