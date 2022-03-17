#include <iostream>
using namespace std;
int findUnique(int arr[],int size){
    int ans;
    for(int i=0;i<size-1;i++){
        ans=ans^arr[i];
    }

    return ans;
}
int main(){
int arr[]={2,4,2,1,4};

int ans=findUnique(arr,5);
cout<<ans;
}