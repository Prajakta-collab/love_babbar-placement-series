#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    cout<<arr[0]<<" "<<arr[1]<<" "<<endl;
//base case is

if(size==0 || size==1) 
    return true;

if(arr[0]>arr[1]){
    return false;
}else{
    int remaininingPart=isSorted(arr+1,size-1);
    return remaininingPart;
}


}
int main(){
    int arr[]={2,4,6,8,9};
    int size=5;

    int ans=isSorted(arr,size);

    if(ans){
        cout<<"sorted array" << endl;
    }else{
        cout<<"unsorted array"<<endl;
    }
}