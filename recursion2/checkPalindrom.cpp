#include<iostream>
using namespace std;

bool isPalindrom(string str,int s,int e){
    //base case 
    if(s>e){
        return true;
    }

    //base case for false - ek case solve kru baki apne aap kr lega

    if(str[s]!=str[e]){
        return false;
    }else{

       return isPalindrom(str,++s,--e);
    }
}

int main(){
    string str="bookkoob";

    cout<<isPalindrom(str,0,str.length()-1);
}