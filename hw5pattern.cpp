#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int star=1;
        while(star<=i*2-2){
            cout<<"*";
            star++;
        }
        int k=1;
        int start=n-i+1;
        while(k<=n-i+1){
            cout<<start;
            start--;
            k++;
            
            
            
        }
        cout<<endl;
        i++;

    }

}