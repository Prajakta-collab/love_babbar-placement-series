#include <iostream>
using namespace std;

void counting(int n){
    //base case: 
    if(n==0){
        return;
    }


    //recursive case:
    counting(n-1);

    //processing 
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;

    counting(n);
}