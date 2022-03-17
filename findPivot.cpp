//find pivot in sorted rotated array
#include<iostream>
using namespace std;

int findPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            //means the mid is on the first line then we have to increse s because mid wont be at first line



            s=mid+1;
        }
        else{
            e=mid;
        }

        mid=s+(e-s)/2;
       
    }

     return s;
}
int main(){
    int arr[]={3,8,10,17,1};
    cout<<findPivot(arr,5);
}