#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i+1;
        while(space){
            cout<<" ";
            space--;

        }
        int j=1;
        int start=1;
        while(j<=i){
            cout<<start;
            start++;
            j++;
        }
       
    
    //int k=2;
    int val=i-1;
    while(val){
        cout<<val;
        val--;
        //k++;
        

    }
 cout<<endl;
        i++;
}}