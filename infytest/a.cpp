#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;

int maxMoves(vector<int> a,int n){
int maxMoves=0;
int j=n-1;
vector<int>::iterator it;
  
    
  
while(j>=0){
    
    if(a[j]>=1 && a[j]-1== a[j-1]){
      
        it=a.begin()+j;
        a.erase(it);
        maxMoves++;
        //continue;
    }
    j--;
}

return maxMoves;
    
}

int main(){
    vector<int> a;
    // int n;
    // cin>>n;

    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    a.push_back(1);
    a.push_back(2);
    a.push_back(2);
    // a.push_back(6);

    // int arr[3]={1,2,2};

    int ans=maxMoves(a,3);

    cout<<ans;

}