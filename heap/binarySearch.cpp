#include<iostream>
using namespace std;
bool binarySearch(int arr[],int size,int key,int s,int e){
    //base case
    if(s>e){
        return false;
    }
   int mid=s+(e-s)/2;

   if(arr[mid]==key){
    return true;
   }

   else if(key>arr[mid]){
    //go to right part
    return binarySearch(arr,size,key,mid+1,e);
   }else{
    //go to left parent
    return binarySearch(arr,size,key,s,mid-1);
   }
}

int main(){
    int arr[]={2,3,5,7,10,33};
    int n=6;
    int key=23;
    int s=0;

    cout<<binarySearch(arr,n,key,s,n);
}