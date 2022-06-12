#include<iostream>
using namespace std;
void reverse(string& str,int s,int e){
    //basee case for
    if(s>e){
        return;
    }

    //processing case

    swap(str[s],str[e]);
    //recursive call

    reverse(str,++s,--e);

}

int main(){

    string str="abcdef";
    reverse(str,0,str.length()-1);

    cout<<str;
}