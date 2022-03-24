#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){

for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}
int main(){

    int arr[]={1,8,3,5,2,10,12,18};

    bubbleSort(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
        
    }
}