#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int key){
    //base case for not found

    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    //base case for found
    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }else{
        return binarySearch(arr,s,mid-1,key);
    }

}
int main(){
    int arr[]={1,5,9,13,19};
    int size=5;

    int key=11;

    cout<<"key found or not:"<<binarySearch(arr,0,size-1,key);
}