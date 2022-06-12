#include <iostream>
using namespace std;
void selectionSort(int arr[],int s,int e){

    //base case 
    if(s==e){
        return;
    }

    int minIndex=s;
    for(int i=s+1;i<e;i++){
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
    }
    cout<<arr[minIndex]<<" ";
    cout<<arr[s]<<endl;
    swap(arr[s],arr[minIndex]);

    //recursive call

    selectionSort(arr,s+1,e);
   

}
int main(){
    int arr[5]={2,4,1,3,0};

    selectionSort(arr,0,5);

    for(int i=0;i<5;i++){
cout <<arr[i]<<" ";
    }
}