//edge case is if the no is greater than the range of integers 
//int range is 2 ki power -31 to 2 ki powere 31 -1



#include<iostream>
#include<climits>

using namespace std;
int main(){
    uint32_t n;
    cin>>n;
    uint32_t ans=0;
    while(n>0){
        int digit=n%10;
        //  if((ans<INT_MIN/10)|(ans>INT_MAX/10)){
        //     cout<<0;
        //     return 0;
        // }
        ans=(ans*10)+digit;
        n=n/10;

       

    }
    cout<<ans;
}