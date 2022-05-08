#include<iostream>
using namespace std;
int getSum(int *arr,int size){
    cout<<arr[0]<<endl;
    //base case for
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    int remaininingPart=getSum(arr+1,size-1);
    return arr[0]+remaininingPart;
}
int main(){
int arr[]={1,2,3,4,5,6,7};
int size=7;

int sum=getSum(arr,size);
cout<<sum<<endl;
}
