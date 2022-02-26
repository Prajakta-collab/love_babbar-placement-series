#include <iostream>
#include <math.h>
#include<climits>
using namespace std;
int main()
{
   int n;
   cin>>n;
   if((n>INT_MAX/10)||(n<INT_MIN/10)){
       cout<<"out of integer range";
       return 0;
   }
   int ans=0,i=0;
   while(n>0){
       int digit=n%10;
       if(digit==1){
           ans+=digit*pow(2,i);
       }
       n=n/10;
       i++;
   }
   cout<<ans<<endl;
}