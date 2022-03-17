#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;
    int step=0;
    while(start<=end){

        cout<<"step-"<<step<<endl;
        cout<<mid<<endl;
        step++;
        //when key matches arr[mid] return it
        if(arr[mid]==key){
            return mid;
        }
        //when key less than arr[mid] then search in left part
        else if(arr[mid]>key){
            end=mid-1;
        }
        //when key is greater than arr[mid] then search in right part
        else{
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[]={1,5,12,16,18,20};

    int ans=binarySearch(arr,6,20);

    cout<<ans<<endl;
}