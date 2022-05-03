#include<iostream>
#include<climits>
using namespace std;
int largestRowSum(int arr[3][3],int row,int col){
int largestSum=INT_MIN;
int rowIndex=-1;


for(int i=0;i<row;i++){
    int sum=0;
    for(int j=0;j<col;j++){
        sum+=arr[i][j];
        rowIndex=i;

    }
    largestSum=max(largestSum,sum);
}
cout<<largestSum<<endl;
return rowIndex;
}
int main(){

    int arr[3][3]={0,1,2,3,4,5,6,7,8};

    int ans=largestRowSum(arr,3,3);
    cout<<ans<<endl;
}