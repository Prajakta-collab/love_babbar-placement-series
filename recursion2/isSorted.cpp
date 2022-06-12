#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    //base case 
    if(size==0 ||size==1)
        return true;
    
    //base case for false
    if(arr[0]>arr[1])
        return false;
    else{
        int remaininingPart=isSorted(arr+1,size-1);
        return remaininingPart;
    }
}

int main(){
    int arr[5]={1,5,9,10,11};

    cout<<isSorted(arr,5);

}