#include<iostream>
using namespace std;
void selectionSort(int arr[],int s,int e){
    //base case - sort krt krt last element prynt pohchl ki stop krych i.e return vhyacha
    if(s==e){
        return;
    }

    int minIndex=s;
    //finding smallest element
    for(int i=s+1;i<e;i++){
        if(arr[minIndex]>arr[i]){
            minIndex=i;
        }
    }

    //swap them to sort 
    swap(arr[s],arr[minIndex]);

    //recursive call 
    selectionSort(arr,s+1,e);


}

int main(){
    int arr[]={2,4,1,3,0};

    selectionSort(arr,0,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}