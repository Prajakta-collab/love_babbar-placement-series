#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int k){
    int ans=-1;
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
 if(arr[mid]==k){
        ans=mid;
        e=mid-1;

    }
    else if(arr[mid]<k){
        s=mid+1;
    }
    else if(arr[mid]>k){
        e=mid-1;
    }
     mid=s+(e-s)/2;
    }

    return ans;
   

}
int lastOcc(int arr[],int n,int k){
    int ans=-1;
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
 if(arr[mid]==k){
        ans=mid;
       s=mid+1;

    }
    else if(arr[mid]<k){
        s=mid+1;
    }
    else if(arr[mid]>k){
        e=mid-1;
    }
    mid=s+(e-s)/2;
    }

    return ans;
   

}
int main(){

int arr[9]={1,2,3,3,3,3,3,4,5};
cout<<"first occ of 3 is "<<firstOcc(arr,9,3);
cout<<"last occ of 3 is "<<lastOcc(arr,9,3);


}