#include<iostream>
using namespace std;

bool checkPalindrome(char ch[],int n){
   int s=0;
   int e=n-1;
   while(s<e){
       if(ch[s]!=ch[e]){
           return 0;
       }else{
           s++;
           e--;
       }
   }

   return 1;
}

void reverseString(char ch[],int n){ 
    int s=0;
    int e=n-1;

    while(s<e){
        swap(ch[s++],ch[e--]);
    }

}
int getLength(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }

    return count;
}
int main(){

    char name[20];
    cin>>name;

    int len=getLength(name);

    cout<<len<<endl;

 reverseString(name,len);
 cout<<name<<endl;

 cout<<checkPalindrome(name,len);

}