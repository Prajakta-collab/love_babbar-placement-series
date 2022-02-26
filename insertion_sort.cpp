#include <iostream>
using namespace std;
void insertion_sort(int arr[],int n){
int i=1;
while(i<=n){
  int j=i-1;
  int temp=arr[i];
  while(j>0){


    if(arr[j]>temp){
      arr[j+1]=arr[j];
    }
    else{
      break;
    }
    j--;
  }

  i++;

  arr[j+1]=temp;

}

}


int main() {
  int arr[5]={1,12,4,2,8};
  insertion_sort(arr,5);

  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }

} 