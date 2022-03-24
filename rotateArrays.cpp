#include<iostream>
#include<vector>
using namespace std;

vector<int> rotateVector(vector<int> v, int k){
vector<int> temp(v.size());

for(int i=0;i<v.size();i++){
    temp[(i+k)%v.size()]=v[i];
}

return temp;
}

int main(){
    vector<int> arr(4);

    arr.push_back(20);
    arr.push_back(10);
    arr.push_back(40);
    arr.push_back(50);

    vector<int> ans(4);
    ans=rotateVector(arr,2);
    

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}