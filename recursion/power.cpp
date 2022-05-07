//2 chi power shodhaychciy na aplayalaa
#include<iostream>
using namespace std;

int power(int n){
    //base case 
    if(n==0) 
        return 1;

    int smalller_Problem=power(n-1);
    int bigger_Problem=2*smalller_Problem;

    return bigger_Problem;
}
int main(){

    int n;
    cin>>n;

    int ans=power(n);
    cout<<ans<<endl;
}