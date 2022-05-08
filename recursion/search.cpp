#include <iostream>
using namespace std;
bool search(int arr[],int size,int target){
    //base case
    if(size==0){
        return false;
    }

    if(arr[0]==target){
        return true;
    }else{
        bool remaininingPart=search(arr+1,size-1,target);
        return remaininingPart;
    }
}

int main(){

    int arr[]={1,2,3,4,5};
    int size=5;
    int target;
    cin>>target;

    int ans=search(arr,size,target);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}