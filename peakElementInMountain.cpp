#include <iostream>
using namespace std;
int findPeak(int arr[], int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e){
        //if mid lies on first line
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        //either its the peak element
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }

    return s;
}
int main(){
    int arr[]={1,2,4,8,6,3};
    cout<<findPeak(arr,6);
}