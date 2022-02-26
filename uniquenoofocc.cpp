#include<iostream>
#include<climits>
using namespace std;
bool uniqueOccurences(int arr[],int size){
    int brr[100]={0};
   for(int i=0;i<size;i++){
       int temp=arr[i];
       for(int i=0;i<size;i++){
           if(arr[i]==temp){
               brr[temp]++;
                break;
           }
       }

   }
   for(int i=0;i<100;i++){
       cout<<brr[i]<<" ";
   }
  
    int ans=0;
  for(int i=0;i<=size;i++){
      ans=ans^brr[i];

      
  }
  cout<<ans<<endl;


  if(ans==0){
      return false;
  }
  
  else{
      return true;
  }
  
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   cout<<uniqueOccurences(arr,n);
    
}