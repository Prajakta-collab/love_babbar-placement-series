#include<iostream>
using namespace std;

int getSum(int* arr,int size){
    //base case for
    if(size==0) 
        return 0;
    if(size==1)
        return arr[0];
    
    //recursive call

    int remaininingPart=getSum(arr+1,size-1);
    int ans=arr[0]+remaininingPart;

    return ans;
}

int main(){
    int arr[5]={1,4,2,8,9};
    cout<<getSum(arr,5);
}