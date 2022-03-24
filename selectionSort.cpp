#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
for(int i=0;i<n-1;i++){
    int midIndex=i;
    for(int j=i+1;j<n;j++){
        //when we found smallest element in the array ,update minIndex
        if(arr[j]<arr[midIndex]){
            midIndex=j;
        }
    }

    swap(arr[midIndex],arr[i]);
}
}
int main(){
    int arr[]={1,8,2,5,3,7};
    selectionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
        
    }

}