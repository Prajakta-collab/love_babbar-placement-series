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
        while(j<=i){
            cout<<"*"<<" ";
            j++;

        }
        // int space2=1;
        // while(space<=i){
        //     cout<<" ";
        //     space2++;
        // }
        // int k=1;
        // while(k<=n-i-1){
        //     cout<<"*";
        //     k++;
        // }


        cout<<endl;
        i++;

    }


}