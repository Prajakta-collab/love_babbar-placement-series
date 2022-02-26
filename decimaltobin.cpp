#include<iostream>
#include<math.h>
using namespace std; 

void dectobin(int n){
    //array to store binary no
    int binary[32];
    //couter to track array 
    int i=0;

    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;

    }

    //print in reverse order
    for(int j=i-1; j>=0;j--){
        cout<<binary[j];
    }

}
int main(){
   int n;
   cin>>n;



   dectobin(n);
}