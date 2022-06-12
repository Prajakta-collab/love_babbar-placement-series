#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int target){
    //base case 
    if(s>e)
        return false;

    int mid=s+(e-s)/2;
    //base case for true
    if(arr[mid]==target){
        return true;
    }

    if(arr[mid]>target){
                return binarySearch(arr,s,mid-1,target);

    }else{
                return binarySearch(arr,mid+1,e,target);

    }
}

int main(){
    int arr[]={1,3,6,7,9};

    cout<<"target found or not : "<<binarySearch(arr,0,4,9);
}