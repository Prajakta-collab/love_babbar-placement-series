#include<iostream>
using namespace std;
int power(int n){
    //base case - 2 raised to 0 =1 
    if(n==0)
        return 1;
    
    //recursive call 
    int smaller_problem=power(n-1);
    int big_problem=2*smaller_problem;

    return big_problem;
}

int main(){
    int n;
    cin>>n;

    cout<<power(n);
}