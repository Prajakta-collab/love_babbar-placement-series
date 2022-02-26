#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int even[6]={2,4,6,7,13,17};
    int odd[5]={1,4,8,14,18};

    int index=binarySearch(even,6,13);
    cout<<index;

}