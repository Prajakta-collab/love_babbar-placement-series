#include<iostream>
using namespace std;
void wavePrint(int arr[][2]){

    for(int col=0;col<2;col++){
        if(col&1){
            //odd 
            for(int row=1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            //even 
            for(int row=0;row<=1;row++){
                                cout<<arr[row][col]<<" ";

            }
        }
    }

}
int main(){

    int arr[2][2]={1,3,5,2};

    wavePrint(arr);


}