#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){

    //base case: 
    if(n==1){
        return;
    }

    //ek case solve krychy , largest element la correct postion la pohchvl sathi
    for(int i=0;i<=n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    //recursive call
    bubbleSort(arr,n-1);

}

int main(){
    int arr[]={2,5,3,1,9,0};

    bubbleSort(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}